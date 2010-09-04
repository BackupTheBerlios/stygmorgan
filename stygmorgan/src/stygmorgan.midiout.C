/*
  stygmorgan - a ryhthm station software

  stygmorgan.midiout.C  -  MIDI OUT functions.
  Copyright (C) 2006 Josep Andreu (Holborn)
  Author: Josep Andreu

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License
(version2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/









#include "stygmorgan.h"


void 
RMGMO::enviobend(int canal,int valor)
{


snd_seq_event_t midievent;
snd_seq_ev_clear (&midievent);

snd_seq_ev_set_pitchbend(&midievent,canal,valor);
snd_seq_ev_set_subs (&midievent);
snd_seq_ev_set_direct (&midievent);
snd_seq_event_output_direct (midi_out, &midievent);

};



void
RMGMO::envioprograma(int canal, int programa)

{

  enviocontrol(canal,0,CM[canal].bMSB);
  enviocontrol(canal,32,CM[canal].bLSB -1);

  snd_seq_event_t midievent;
  snd_seq_ev_clear (&midievent);

  snd_seq_ev_set_pgmchange (&midievent, canal, programa);

  snd_seq_ev_set_subs (&midievent);
  snd_seq_ev_set_direct (&midievent);

  snd_seq_event_output_direct (midi_out, &midievent);


}






void
RMGMO::enviocontrol(int canal,int control, int value)
{

snd_seq_event_t midievent;
snd_seq_ev_clear (&midievent);

snd_seq_ev_set_controller (&midievent, canal, control, value);
snd_seq_ev_set_subs (&midievent);
snd_seq_ev_set_direct (&midievent);
snd_seq_event_output_direct (midi_out, &midievent);

}


void 
RMGMO::set_tempo() 

{


  snd_seq_queue_tempo_t *queue_tempo;

  if (lppq == 1) lppq=nStyle.ppq;
  if (nStyle.ppq != lppq)
  {
  rela= (double)((double) rela * (double)lppq / (double) nStyle.ppq);
  lppq=nStyle.ppq;
  }


  snd_seq_queue_tempo_malloc(&queue_tempo);
  tempo = (int)( 6e7 / (double)bpm ) ;
  tempo =(int) (tempo * rela);

  snd_seq_queue_tempo_set_tempo(queue_tempo, tempo);
  snd_seq_queue_tempo_set_ppq(queue_tempo, nStyle.ppq);
  snd_seq_set_queue_tempo(midi_out, queue_id, queue_tempo);
  snd_seq_queue_tempo_free(queue_tempo);

}

snd_seq_tick_time_t 
RMGMO::get_tick() 

{

  snd_seq_queue_status_t *status;
  snd_seq_tick_time_t current_tick;
  snd_seq_queue_status_malloc(&status);
  snd_seq_get_queue_status(midi_out, queue_id, status);
  current_tick = snd_seq_queue_status_get_tick_time(status);
  snd_seq_queue_status_free(status);
  return(current_tick);
}

void 
RMGMO::init_queue() 
{

 queue_id = snd_seq_alloc_queue(midi_out);
 snd_seq_set_client_pool_output(midi_out, 2048);
}

void 
RMGMO::clear_queue() 
{

  snd_seq_remove_events_t *remove_ev;
  snd_seq_remove_events_malloc(&remove_ev);
  snd_seq_remove_events_set_queue(remove_ev, queue_id);
  snd_seq_remove_events_set_condition(remove_ev, SND_SEQ_REMOVE_OUTPUT | SND_SEQ_REMOVE_IGNORE_OFF);
  snd_seq_remove_events(midi_out, remove_ev);
  snd_seq_remove_events_free(remove_ev);

}




void
RMGMO::panico (int data, int canal1, int canal2)
{

  int i, j ;

  for (i=0; i<POLY; i++) 
	  {
  		note_active[i] = 0;
  		gate[i] = 0;
  	   }


  for (j = canal1; j <= canal2; j++)
	  {
	  enviocontrol (j, 123, 0);
          if (data > 0 ) enviocontrol (j, 121, 0);
  	  }

};


void

RMGMO::silent(int data, int canal1, int canal2)

{
  int j;

     for (j = canal1; j <= canal2; j++)
	  {
	  enviocontrol (j, data, 0);
  	  }

};



void 
RMGMO::envionota(int canal,int nota, int velocity )
{

     snd_seq_event_t ev;
     snd_seq_ev_clear(&ev);
     snd_seq_ev_set_noteon(&ev,canal,nota,velocity);
     snd_seq_ev_set_subs (&ev);
     snd_seq_ev_set_direct (&ev);
     snd_seq_event_output_direct(midi_out, &ev);

if (velocity > 0)
{
time_t result;

PO[Pendientes].canal=canal;
PO[Pendientes].nota=nota;
PO[Pendientes].estado=1;
result=time(NULL);
PO[Pendientes].delta=result;
Pendientes++;
}

};



void
RMGMO::ActuVarVol(int a, int b)
{
  int i;
  int val=0;
  int porce=0;



    if (a < 5 ) porce=KeybVol;
    if (a > 8 ) porce=AccVol;

    for (i=a; i<=b; i++)

    {
      val=(int) ( CM[i].vol * (double) ( porce / 100.0 ));

      if ( val > 127) val = 127;


      enviocontrol(i,7,val);
    }

};



void
RMGMO::ActuAccVol()
{
  ActuVarVol(9,15);
};

void

RMGMO::ActuKeybVol()
{
  ActuVarVol(0,4);

};









