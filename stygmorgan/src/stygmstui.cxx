// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include <libintl.h>
#include "stygmstui.h"
//Copyright(c) 2006 Josep Andreu (holborn)
//License GNU/GPL version 2

void rmgmstye::cb_rmgmstyewin_i(Fl_Double_Window*, void*) {
  pera=2;
rmgmstyewin->hide();
rmgmo->wstyleeditor=0;
rmgmstyewin->clear();
delete rmgmstyewin;
}
void rmgmstye::cb_rmgmstyewin(Fl_Double_Window* o, void* v) {
  ((rmgmstye*)(o->user_data()))->cb_rmgmstyewin_i(o,v);
}

void rmgmstye::cb_Cancel_i(Fl_Button*, void*) {
  rmgmo->bcancel=1;
rmgmstyewin->do_callback();
}
void rmgmstye::cb_Cancel(Fl_Button* o, void* v) {
  ((rmgmstye*)(o->parent()->user_data()))->cb_Cancel_i(o,v);
}

void rmgmstye::cb_Ok_i(Fl_Button*, void*) {
  rmgmo->nStyle.style=(int)Estyle->value();
strcpy(rmgmo->nStyle.Name,EName->value());
rmgmo->nStyle.bpm=(int)StTempo->value();
rmgmstyewin->do_callback();
}
void rmgmstye::cb_Ok(Fl_Button* o, void* v) {
  ((rmgmstye*)(o->parent()->user_data()))->cb_Ok_i(o,v);
}

rmgmstye::rmgmstye(RMGMO *rmgmo_) {
  char temp[128];
  static const char *pepe [] ={"stygmorgan"};
  
  int argc=1;
  char **argv= (char **) pepe;
  
  Fl::visual(FL_DOUBLE|FL_INDEX);
  Fl::visual(FL_RGB);
  rmgmo=rmgmo_;
  make_window();
  rmgmstyewin->position(x,y);
  sprintf(temp, "%s - Style Parameters",rmgmo->nStyle.Name);
  rmgmstyewin->label(temp);
  
  rmgmstyewin->icon((char *)p);
  rmgmstyewin->show(argc,argv);
}

Fl_Double_Window* rmgmstye::make_window() {
  { rmgmstyewin = new Fl_Double_Window(475, 190);
    rmgmstyewin->color((Fl_Color)31);
    rmgmstyewin->callback((Fl_Callback*)cb_rmgmstyewin, (void*)(this));
    { EName = new Fl_Input(15, 30, 325, 30, gettext("Name"));
      EName->labelsize(11);
      EName->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Input* EName
    { Fl_Button* o = new Fl_Button(370, 20, 80, 25, gettext("Cancel"));
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(370, 55, 80, 25, gettext("Ok"));
      o->callback((Fl_Callback*)cb_Ok);
    } // Fl_Button* o
    { Estyle = new Fl_Choice(15, 85, 325, 25, gettext("Style Type"));
      Estyle->down_box(FL_BORDER_BOX);
      Estyle->labelsize(11);
      Estyle->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Choice* Estyle
    { StTempo = new Fl_Counter(15, 135, 105, 25, gettext("Tempo"));
      StTempo->box(FL_PLASTIC_DOWN_BOX);
      StTempo->labelsize(11);
      StTempo->minimum(20);
      StTempo->maximum(300);
      StTempo->step(1);
      StTempo->value(120);
      StTempo->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Counter* StTempo
    rmgmstyewin->end();
  } // Fl_Double_Window* rmgmstyewin
  int i;
  
  for (i=0; i<=17; i++)
    Estyle->add(rmgmo->CStyle[i].Nom);
  
   StTempo->lstep(10);  
    
    EName->value(rmgmo->nStyle.Name);
    Estyle->value(rmgmo->nStyle.style);
    StTempo->value(rmgmo->nStyle.bpm);
  return rmgmstyewin;
}
