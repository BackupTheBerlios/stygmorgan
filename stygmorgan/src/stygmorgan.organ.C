/*
  stygmorgan - a ryhthm station software

  stygmorgan.organ.C  -  Most of the functions of the organ
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

RMGMO::EPlay()
{

int lanota;
int ncanal;

if (nStyle.ppq == 0) return;

ttick = get_tick();

ptick = ttick - (longi * patrones) - rema;

negra=(( ptick / nunegra ) % divisor) + 1;


semi=(ptick /  (nunegra / 4)) % (divisor * 4) + 1; 


if ((ptick / longic) + 1 != vcompas) 
{
sic=1;
vcompas = (ptick / longic) + 1;
sprintf(dcompas,"%d",vcompas);
}



if (( tiene > 0 ) && (vcompas == nStyle.Pattern[Variacion].bars))
{
     MiraSiNext();
     if ( ptick > 0 ) rema=0;
     cs=0;
     ptick = 0;
}

;
if ( ptick >= longi)
    {
      
      patrones++;
      MiraSiNext();
      cs=0;
      ptick = 0;

    }



while (PEG[Variacion][cs].tipo==0) cs++;



        while ((PEG[Variacion][cs].tick <= ptick) && (cs < nStyle.Pattern[Variacion].eventos) )
         {
            if (pc[PEG[Variacion][cs].canal])
               {

                ncanal = pcp[PEG[Variacion][cs].canal];

                if (PEG[Variacion][cs].tipo==2)
                {
                MiraChord();
                lanota=miranota(PEG[Variacion][cs].nota,PEG[Variacion][cs].canal);
                }
                else lanota=PEG[Variacion][cs].nota;

                PonPlay(PEG[Variacion][cs].tipo, PEG[Variacion][cs].tick, lanota,ncanal,PEG[Variacion][cs].velocity,PEG[Variacion][cs].length);
                }
            cs++;
          }




};

void
RMGMO::PonPlay(int tipo, snd_seq_tick_time_t gtick, int gnota, int gcanal, int gvelocity, int glength)
{

snd_seq_event_t ev;
snd_seq_ev_clear(&ev);




if ( ! CM[gcanal].OnOff) return;

cocas[gcanal]=1;
lastvelo[gcanal]=gvelocity;

gtick = gtick + ( patrones * longi )+ rema;


switch(tipo)
       {
      case 1:
          snd_seq_ev_set_note(&ev, gcanal, gnota, gvelocity, glength);
          break;
      case 2:
          snd_seq_ev_set_note(&ev, gcanal, gnota, gvelocity, glength);
          break;
      case 3:
          snd_seq_ev_set_controller(&ev,gcanal,gnota,gvelocity);
          break;
      case 4:
          snd_seq_ev_set_pgmchange(&ev,gcanal,gnota);
          break;

      case 5: 
          snd_seq_ev_set_pitchbend(&ev,gcanal,gnota);

        }

     if ((tipo>0) && (tipo<6))
          {
          snd_seq_ev_schedule_tick(&ev, queue_id,  0, gtick);
          snd_seq_ev_set_source(&ev, pmidi_in);
          snd_seq_ev_set_subs (&ev);
          snd_seq_event_output_direct(midi_out, &ev);
          }

};

void
RMGMO::ostart()
{

      nStyle.har=0;
      init_queue();
      snd_seq_start_queue(midi_out,queue_id, NULL);
      rela=1.0;
      set_tempo();
      snd_seq_drain_output(midi_out); 
      cs = 0;
      vcompas=0;
      scompas=0;
      vnegra=0;
      onegra=0;
      rema=0;
      patrones=0;
      anti=0;
      posanti=0;
      if (bplay) EPlay();
      if (splay) SeqPlay();
};

void
RMGMO::ostop()
{
    rela=1.0;
    panico(0,0,15);
    clear_queue();
    snd_seq_stop_queue(midi_out, queue_id, NULL);
    snd_seq_free_queue(midi_out, queue_id);

};


void
RMGMO::mirapc(int variacion)

{
  int i;

  memset (pc, 0 ,sizeof pc);
  memset (pcp, 0, sizeof pcp);
  memset (tcr, 0, sizeof tcr);
  memset (chro, 0, sizeof chro);
  memset (nttc, 0, sizeof nttc);
  memset (pclio, 0,sizeof pclio);
  memset (pcpon, 0,sizeof pcpon);


  longi = nStyle.ppq / ajusta * nStyle.nominador * nStyle.Pattern[Variacion].bars;

  longic = longi / nStyle.Pattern[Variacion].bars;

  espacio = nStyle.ppq / 96;

  for (i=0; i<nStyle.Pattern[variacion].numcasm; i++)
    {

    pc[nStyle.Pattern[variacion].casm[i].track]=1;
    pcp[nStyle.Pattern[variacion].casm[i].track]=nStyle.Pattern[variacion].casm[i].Canal;


    if ((strstr(nStyle.Pattern[variacion].Name,"Intro")== 0) && 
    (strstr(nStyle.Pattern[variacion].Name,"Endi")== 0) && (nStyle.Pattern[variacion].casm[i].NTT == 0))
    pcp[nStyle.Pattern[variacion].casm[i].track]=9;

    if (( nStyle.Pattern[variacion].casm[i].NTT==3) && ( nStyle.Pattern[variacion].casm[i].RTR=2))
     pchar[nStyle.Pattern[variacion].casm[i].track]=1 ; else pchar[nStyle.Pattern[variacion].casm[i].track]=0;


    if ((nStyle.Pattern[Variacion].casm[i].RTR==1) && (nStyle.Pattern[Variacion].casm[i].NTT==2))
     {
     pclio[nStyle.Pattern[Variacion].casm[i].Canal]=1; 
     pcpon[nStyle.Pattern[Variacion].casm[i].track]=1;
     
     }
     else 
     {
     pclio[nStyle.Pattern[Variacion].casm[i].Canal]=0;
     pcpon[nStyle.Pattern[Variacion].casm[i].track]=0;
     }


    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Prc")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Add_H")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Timp")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"timp")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Dr")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"dru")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"DRU")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"24El")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"32Ja")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"00Stn")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Stand")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Std")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Kit")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;          
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Rhy")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"RHY")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"AddD")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Brush")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Analog")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"add Dr")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"AdDr")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"add-dr")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"AD")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Perc")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;    
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"perc")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Cnga")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Timb")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"CRASH")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;        
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"Crash")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9;
    if (strstr(nStyle.Pattern[variacion].casm[i].Name,"        ")!= 0) pcp[nStyle.Pattern[variacion].casm[i].track]=9; 


    chro[nStyle.Pattern[variacion].casm[i].track]=nStyle.Pattern[variacion].casm[i].ChRoot;
    nttc[nStyle.Pattern[variacion].casm[i].track]=nStyle.Pattern[variacion].casm[i].NTT;

    if ((strstr(nStyle.Pattern[variacion].Name,"Intro")!= 0) || (strstr(nStyle.Pattern[variacion].Name,"Ending")!= 0))
    nttc[nStyle.Pattern[variacion].casm[i].track]=0;


   tcr[nStyle.Pattern[variacion].casm[i].track]=nStyle.Pattern[variacion].casm[i].ChType;



     }



};


void
RMGMO::BuscaSi()

{
  int i;

  sema=1;
  for (i=0; i<nStyle.Pattern[Variacion].numcasm; i++)

       { 

               if ((nStyle.Pattern[Variacion].casm[i].ChM & mt) == mt)
                {
                pc[nStyle.Pattern[Variacion].casm[i].track]=1;
                }
                else
                {
                pc[nStyle.Pattern[Variacion].casm[i].track]=0;
                }

       }

      
      allio();
};

void
RMGMO::ponmixpatternenmix(int patron)
{
   int i;

  for(i=9; i<=15; i++)
  {
   enviocontrol(i,121,0);
   enviocontrol(i,11,127);

   if (Respect==0) CM[i].OnOff = nStyle.Pattern[patron].CM[i].OnOff;

   CM[i].program = nStyle.Pattern[patron].CM[i].program;
   envioprograma(i,CM[i].program);

   CM[i].vol = nStyle.Pattern[patron].CM[i].vol;
   ActuVarVol(i,i);

   CM[i].chorus = nStyle.Pattern[patron].CM[i].chorus;
   enviocontrol(i,93,CM[i].chorus);

   CM[i].reverb = nStyle.Pattern[patron].CM[i].reverb;
   enviocontrol(i,91,CM[i].reverb);

   CM[i].pan = nStyle.Pattern[patron].CM[i].pan;
   enviocontrol(i,10,CM[i].pan);

   enviobend(i,0);

   CM[i].bMSB = nStyle.Pattern[patron].CM[i].bMSB;
   CM[i].bLSB = nStyle.Pattern[patron].CM[i].bLSB;
   CM[i].octave = nStyle.Pattern[patron].CM[i].octave;
   CM[i].transpose = nStyle.Pattern[patron].CM[i].transpose;
  if (Respect==0)   CM[i].solo = nStyle.Pattern[patron].CM[i].solo;
   CM[i].more = nStyle.Pattern[patron].CM[i].more;


  }
}

void
RMGMO::ponmixenmixpattern(int patron)
{
int i;

for(i=9; i<=15; i++)
  {

nStyle.Pattern[patron].CM[i].OnOff=CM[i].OnOff;
nStyle.Pattern[patron].CM[i].program=CM[i].program;
nStyle.Pattern[patron].CM[i].vol=CM[i].vol;
nStyle.Pattern[patron].CM[i].chorus=CM[i].chorus;
nStyle.Pattern[patron].CM[i].reverb=CM[i].reverb;
nStyle.Pattern[patron].CM[i].pan=CM[i].pan;
nStyle.Pattern[patron].CM[i].bMSB=CM[i].bMSB;
nStyle.Pattern[patron].CM[i].bLSB=CM[i].bLSB;
nStyle.Pattern[patron].CM[i].octave=CM[i].octave;
nStyle.Pattern[patron].CM[i].transpose=CM[i].transpose;

  }


};


void
RMGMO::MiraSiNext()

{
 if (siguiente == Variacion) return;
 if (siguiente == 0)
 {
   ostop();
   bplay=0;
   endi=1;
   return;
 }
 buscacs(siguiente);
 ultima=Variacion; 
 Variacion=siguiente;
 mirapc(Variacion);
 BuscaSi();
 ponmixpatternenmix(Variacion);
 hay=1;
 if (tiene > 0 )
 {
  siguiente = tiene;
  tiene = 0;
 }

};


void
RMGMO::buscacs(int siguiente)
{



unsigned int nlongi=nStyle.ppq * nStyle.nominador * nStyle.Pattern[siguiente].bars; 


if ( longi == nlongi ) return;

if (nlongi != 0) 
  { 
   patrones=ttick/nlongi;
   rema=ttick % nlongi;
  }

}


void
RMGMO::PonAjusta()
{

  switch(nStyle.denominator)
    {
         case 2:
          ajusta =1;
          nunegra=nStyle.ppq;
          divisor=nStyle.nominador;
          break;
         case 3:
          ajusta =2;
          nunegra=nStyle.ppq + (nStyle.ppq / 2);
          divisor=nStyle.nominador / 3;
          break;
         case 4:
          ajusta =4;
     }

};


