// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include <libintl.h>
#include "stygmeditui.h"
//Copyright(c) 2006 Josep Andreu (holborn)
//License GNU/GPL version 2
#include "choice.h"

ElBro::ElBro(int X, int Y, int W, int H) : Fl_Browser(X,Y,W,H) {
}

void ElBro::resize(int X, int Y,int W, int H) {
  int i;
int sizes[512];
static const int colsizes[]= {60,100,32,110,160,160,0};


memset(sizes, 0 , sizeof sizes); 

for (i=0; i<=5;i++)
{
 sizes[i]=colsizes[i]* ( W-20) / 725;
 } 

sizes[6]=0;  
   
   

  
//init_sizes();  

Fl_Browser::column_widths((const int*) sizes);

Fl_Browser::resize(X,Y,W,H);
}

void ElBro::redraw() {
  resize(x(),y(),w(),h());

Fl_Browser::redraw();
}

void type_cb(Fl_Widget* o,void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->type_cb_i(o,v);
}

void rmgmedit::cb_rmgmeditwin_i(Fl_Double_Window* o, void*) {
  pera=2;
GuardaPrefs();
o->hide();
rmgmo->weventeditor=0;
o->clear();
delete rmgmeditwin;
}
void rmgmedit::cb_rmgmeditwin(Fl_Double_Window* o, void* v) {
  ((rmgmedit*)(o->user_data()))->cb_rmgmeditwin_i(o,v);
}

void rmgmedit::cb_EditBro_i(ElBro* o, void*) {
  int i,j,k;

if (o->value()== 1) 
{
o->select(1,0);
return;
}
 
i=rmgmo->buscanum(o->text(o->value()));

if ((Hear->value()) && ( rmgmo->PEG[rmgmo->Variacion][i].tipo == 2 ))

rmgmo->envionota(rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal],rmgmo->PEG[rmgmo->Variacion][i].nota,100);

if (Fl::event_button()==3) 
{
editaevento(i);
EditBro->redraw();
return;
}

if (sAllE->value())
{ 
  for(j=2; j<=o->size(); j++)
   {
      k=rmgmo->buscanum(o->text(j));
      if ((rmgmo->PEG[rmgmo->Variacion][k].tipo == rmgmo->PEG[rmgmo->Variacion][i].tipo) && (rmgmo->PEG[rmgmo->Variacion][k].nota == rmgmo->PEG[rmgmo->Variacion][i].nota)
      && (rmgmo->PEG[rmgmo->Variacion][k].canal == rmgmo->PEG[rmgmo->Variacion][i].canal)) o->select(j,1);
    }
 };
}
void rmgmedit::cb_EditBro(ElBro* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_EditBro_i(o,v);
}

void rmgmedit::cb_sNote_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sNote(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sNote_i(o,v);
}

void rmgmedit::cb_sControl_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sControl(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sControl_i(o,v);
}

void rmgmedit::cb_sProgram_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sProgram(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sProgram_i(o,v);
}

void rmgmedit::cb_sPitchBend_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_sPitchBend(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_sPitchBend_i(o,v);
}

void rmgmedit::cb__i(Fl_Menu_Bar*, void*) {
  EditBro->redraw();
}
void rmgmedit::cb_(Fl_Menu_Bar* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb__i(o,v);
}

void rmgmedit::cb_Brush_i(Fl_Menu_*, void*) {
  rmgmo->XGGM();
ReadPattern();
}
void rmgmedit::cb_Brush(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Brush_i(o,v);
}

void rmgmedit::cb_Help_i(Fl_Menu_*, void*) {
  rmgmo->ventana=7;
EditBro->redraw();
ReadPattern();
}
void rmgmedit::cb_Help(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Help_i(o,v);
}

void rmgmedit::cb_About_i(Fl_Menu_*, void*) {
  if(wabout) return;
wabout=1;
rmgmo->ventana=1;
EditBro->redraw();
ReadPattern();
}
void rmgmedit::cb_About(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_About_i(o,v);
}

Fl_Menu_Item rmgmedit::menu_[] = {
 {gettext("&Functions"), 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {gettext("Brush Drums XG->GM"), 0,  (Fl_Callback*)rmgmedit::cb_Brush, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {gettext("&Help"), 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {gettext("Help"), 0xffbe,  (Fl_Callback*)rmgmedit::cb_Help, 0, 128, FL_NORMAL_LABEL, 0, 14, 0},
 {gettext("About"), 0,  (Fl_Callback*)rmgmedit::cb_About, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* rmgmedit::sFunctions = rmgmedit::menu_ + 0;

void rmgmedit::cb_Hear_i(Fl_Button* o, void*) {
  if (o->value() == 0) rmgmo->panico(1,0,15);
}
void rmgmedit::cb_Hear(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Hear_i(o,v);
}

void rmgmedit::cb_Edit_i(Fl_Button*, void*) {
  int i,j;

for(i=2; i<=EditBro->size(); i++)
 {
   if (EditBro->selected(i))
        {  
          j=rmgmo->buscanum(EditBro->text(i));
          editaevento(j);
          break;
          
        }  
  };
}
void rmgmedit::cb_Edit(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_Edit_i(o,v);
}

void rmgmedit::cb_Delete_i(Fl_Button*, void*) {
  int i;
int j=0;
for (i=2; i<=EditBro->size(); i++)


{
if (EditBro->selected(i)) 
{

rmgmo->borraevento(rmgmo->buscanum(EditBro->text(i))-j);
j++;
}
}

ReadPattern();
}
void rmgmedit::cb_Delete(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_Delete_i(o,v);
}

void rmgmedit::cb_IsNote_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsNote(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsNote_i(o,v);
}

void rmgmedit::cb_IsControl_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsControl(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsControl_i(o,v);
}

void rmgmedit::cb_IsProgram_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsProgram(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsProgram_i(o,v);
}

void rmgmedit::cb_IsPitchBend_i(Fl_Check_Button*, void*) {
  ReadPattern();
}
void rmgmedit::cb_IsPitchBend(Fl_Check_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_IsPitchBend_i(o,v);
}

void rmgmedit::cb_Ok_i(Fl_Button*, void*) {
  rmgmeditwin->do_callback();
}
void rmgmedit::cb_Ok(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Ok_i(o,v);
}

void rmgmedit::cb_Insert_i(Fl_Button*, void*) {
  int index=0;
int canal=0;
int tipo=0;
int i;

for (i=2;i<=EditBro->size();i++)
if (EditBro->selected(i))
  {
     index=rmgmo->buscanum(EditBro->text(i));
     break;
   }
   
if (IsNote->value()) tipo=2;
if (IsControl->value()) tipo=3;
if (IsProgram->value()) tipo=4;
if (IsPitchBend->value()) tipo=5;

canal=(int) SChMidi->value() -1;    
     
rmgmo->InsertaEvento(index,tipo,canal);

ReadPattern();
editaevento(index);
}
void rmgmedit::cb_Insert(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->parent()->user_data()))->cb_Insert_i(o,v);
}

void rmgmedit::cb_Cancel_i(Fl_Button*, void*) {
  rmgmo->bcancel=2;
rmgmeditwin->do_callback();
}
void rmgmedit::cb_Cancel(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Cancel_i(o,v);
}

void rmgmedit::cb_Eventwin_i(Fl_Double_Window*, void*) {
  Eventwin->hide();
EditBro->redraw();
}
void rmgmedit::cb_Eventwin(Fl_Double_Window* o, void* v) {
  ((rmgmedit*)(o->user_data()))->cb_Eventwin_i(o,v);
}

void rmgmedit::cb_Ok1_i(Fl_Button*, void*) {
  int i;
int pvelo=0;
int plength=0;
int lastselected=1;

if (sAllE->value())
{

  if (presvelo->value()) pvelo=1;
  if (preslength->value()) plength=1; 

for (i=2;i<=EditBro->size();i++)
{
  if (EditBro->selected(i))
  { 
    rmgmo->selevent=rmgmo->buscanum(EditBro->text(i));
    rmgmo->ActuaEvento(1, pvelo,plength,(unsigned int)SlPos->value(),(int)SlNote->value(),(int)SlVal1->value(),(int)SlVal2->value(),(int)SlVelo->value(),(int)SlLength->value());
    if(lastselected==1) lastselected=i;
  }
}  


}
else
{
rmgmo->ActuaEvento(0,pvelo,plength,(unsigned int)SlPos->value(),(int)SlNote->value(),(int)SlVal1->value(),(int)SlVal2->value(),(int)SlVelo->value(),(int)SlLength->value());
lastselected=EditBro->value();

}
Eventwin->do_callback();
ReadPattern();
EditBro->topline(lastselected);
EditBro->select(lastselected,1);
}
void rmgmedit::cb_Ok1(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Ok1_i(o,v);
}

void rmgmedit::cb_Cancel1_i(Fl_Button*, void*) {
  Eventwin->do_callback();
}
void rmgmedit::cb_Cancel1(Fl_Button* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Cancel1_i(o,v);
}

void rmgmedit::cb_SlPos_i(Fl_Counter* o, void*) {
  char pos[32];
char *posi;

bzero(pos,sizeof(pos));
posi=pos;
rmgmo->convtickcompasval(posi,(int)o->value());
PosDis->copy_label(pos);
SlVal2->maximum(rmgmo->longic - SlPos->value());
}
void rmgmedit::cb_SlPos(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlPos_i(o,v);
}

void rmgmedit::cb_SlNote_i(Fl_Counter* o, void*) {
  char note[32];
char *notei;


bzero(note,sizeof(note));
notei=note;


rmgmo->convnotaval(notei,(int)o->value());

NotaDis->copy_label(note);
}
void rmgmedit::cb_SlNote(Fl_Counter* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_SlNote_i(o,v);
}

rmgmedit::rmgmedit(RMGMO *rmgmo_) {
  char temp[80];
int x1,y1,w1,h1;

static const char *pepe [] ={"stygmorgan"};

int argc=1;
char **argv= (char **) pepe;

Fl::visual(FL_DOUBLE|FL_INDEX);
Fl::visual(FL_RGB);
rmgmo=rmgmo_;

make_window();
make_eventwindow();

Fl_Preferences stygmorgan (Fl_Preferences::USER, WEBSITE, PACKAGE);
stygmorgan.get("rmgmeditwinX",x1,x);
stygmorgan.get("rmgmeditwinY",y1,y);
stygmorgan.get("rmgmeditwinW",w1,750);
stygmorgan.get("rmgmeditwinH",h1,535);

rmgmeditwin->icon((char *)p);

sNote->value(1);
sControl->value(1);
sProgram->value(1);
sPitchBend->value(1);
DNomCh->copy_label("All");
BaseChord->copy_label("---");
IsNote->setonly();
bzero(temp,sizeof(temp));
sprintf(temp, "%s %s - %s - %s - Event Editor",PACKAGE,VERSION,rmgmo->nStyle.Name,rmgmo->nStyle.Pattern[rmgmo->Variacion].Name);
rmgmeditwin->label(temp);

chsel=0;
SelCh->menu(choices);
SelCh->value(0);

rmgmo->Pendientes=0;
memset(rmgmo->PO, 0 ,sizeof rmgmo->PO);


rmgmeditwin->show(argc,argv);

rmgmeditwin->resize(x1,y1,w1,h1);

ReadPattern();
}

Fl_Double_Window* rmgmedit::make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = rmgmeditwin = new Fl_Double_Window(750, 535);
    w = o;
    o->color(FL_BACKGROUND2_COLOR);
    o->labelsize(11);
    o->callback((Fl_Callback*)cb_rmgmeditwin, (void*)(this));
    { ElBro* o = EditBro = new ElBro(5, 130, 745, 405);
      o->tooltip(gettext("Left Click Select - Rigth Click Edit"));
      o->type(3);
      o->box(FL_NO_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->selection_color(FL_SELECTION_COLOR);
      o->labeltype(FL_NORMAL_LABEL);
      o->labelfont(0);
      o->labelsize(14);
      o->labelcolor(FL_FOREGROUND_COLOR);
      o->callback((Fl_Callback*)cb_EditBro);
      o->align(FL_ALIGN_BOTTOM);
      o->when(FL_WHEN_RELEASE_ALWAYS);
    }
    { Fl_Group* o = new Fl_Group(5, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { Fl_Check_Button* o = sNote = new Fl_Check_Button(10, 65, 60, 15, gettext("Note"));
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_sNote);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Check_Button* o = sControl = new Fl_Check_Button(10, 95, 60, 15, gettext("Control"));
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_sControl);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Check_Button* o = sProgram = new Fl_Check_Button(10, 80, 65, 15, gettext("Program"));
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_sProgram);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Check_Button* o = sPitchBend = new Fl_Check_Button(10, 110, 80, 15, gettext("Pitch Bend"));
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_sPitchBend);
        o->when(FL_WHEN_CHANGED);
      }
      o->end();
    }
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 755, 20);
      o->color(FL_BACKGROUND2_COLOR);
      o->callback((Fl_Callback*)cb_);
      o->menu(menu_);
    }
    { Fl_Button* o = Hear = new Fl_Button(595, 35, 25, 25, gettext("@<->"));
      o->type(1);
      o->color((Fl_Color)215);
      o->selection_color((Fl_Color)3);
      o->callback((Fl_Callback*)cb_Hear);
    }
    { Fl_Box* o = new Fl_Box(100, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
    }
    { Fl_Choice* o = SelCh = new Fl_Choice(105, 75, 80, 20, gettext("Midi Channel"));
      o->down_box(FL_BORDER_BOX);
      o->labelsize(11);
      o->textsize(11);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Box* o = DNomCh = new Fl_Box(105, 100, 80, 25);
      o->box(FL_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
    }
    { Fl_Box* o = Disi = new Fl_Box(5, 35, 185, 20, gettext("Display"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)26);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelfont(1);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Box* o = new Fl_Box(210, 35, 185, 20, gettext("Select"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)26);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelfont(1);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Group* o = new Fl_Group(210, 60, 185, 60);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { Fl_Check_Button* o = sAllE = new Fl_Check_Button(215, 65, 175, 20, gettext("All Equal Events"));
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Button* o = new Fl_Button(220, 90, 80, 25, gettext("Edit"));
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Edit);
      }
      { Fl_Button* o = new Fl_Button(305, 90, 80, 25, gettext("Delete"));
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Delete);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(405, 35, 185, 20, gettext("Insert"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)26);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelfont(1);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Group* o = new Fl_Group(405, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { Fl_Check_Button* o = IsNote = new Fl_Check_Button(410, 65, 60, 15, gettext("Note"));
        o->type(102);
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_IsNote);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Check_Button* o = IsControl = new Fl_Check_Button(410, 95, 60, 15, gettext("Control"));
        o->type(102);
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_IsControl);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Check_Button* o = IsProgram = new Fl_Check_Button(410, 80, 65, 15, gettext("Program"));
        o->type(102);
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_IsProgram);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Check_Button* o = IsPitchBend = new Fl_Check_Button(410, 110, 80, 15, gettext("Pitch Bend"));
        o->type(102);
        o->down_box(FL_DOWN_BOX);
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_IsPitchBend);
        o->when(FL_WHEN_CHANGED);
      }
      o->end();
    }
    { Fl_Button* o = new Fl_Button(660, 55, 85, 25, gettext("Ok"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Ok);
    }
    { Fl_Group* o = new Fl_Group(500, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { Fl_Button* o = new Fl_Button(505, 65, 80, 25, gettext("Insert"));
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Insert);
      }
      { Fl_Counter* o = SChMidi = new Fl_Counter(505, 105, 80, 20, gettext("Midi Ch."));
        o->type(1);
        o->box(FL_PLASTIC_THIN_DOWN_BOX);
        o->color(FL_BACKGROUND2_COLOR);
        o->labelsize(11);
        o->minimum(1);
        o->maximum(16);
        o->step(1);
        o->value(10);
        o->align(FL_ALIGN_TOP);
      }
      o->end();
    }
    { Fl_Button* o = new Fl_Button(660, 25, 85, 25, gettext("Cancel"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Cancel);
    }
    { Fl_Box* o = BaseChord = new Fl_Box(600, 100, 145, 25);
      o->box(FL_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Box* o = LabelBaseChord = new Fl_Box(600, 85, 145, 15, gettext("Base Chord"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)17);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelfont(1);
      o->labelsize(12);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    o->size_range(800, 600);
    o->end();
    o->resizable(o);
  }
  return w;
}

void rmgmedit::ReadPattern() {
  int i;
int fcana,feve; 
char temp[256], evento[24],nota[64],pos[32],length[16],velo[16];
char *posi = pos;
char *noti = nota;


EditBro->clear();

bzero(temp,sizeof(temp));
sprintf(temp, "@c@b@B52@C1@_%s\t@c@b@B54@C1@_%s\t@c@b@B52@C1@_%s\t@c@b@B54@C1@_%s\t@c@b@B52@C1@_%s\t@c@b@B54@C1@_%s\t@c@b@B52@C1@_%s", "Index","Position","Ch.","Event","Value 1","Value 2","Length"); 
EditBro->add(temp);

for (i=0; i<rmgmo->nStyle.Pattern[rmgmo->Variacion].eventos;i++)
{
  fcana=0; feve=0;



switch (chsel)
     {
       case 0:
        fcana=1;
        break;
       case 17:
        if (rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal]==9) fcana=1;
        break;
       default:
        if (rmgmo->PEG[rmgmo->Variacion][i].canal == (chsel - 1)) fcana=1;
     }


  if (fcana == 0 ) continue;


  switch (rmgmo->PEG[rmgmo->Variacion][i].tipo)
   {
     case 2:
     
     if (sNote->value()) feve=1;
      break;
     
     case 3:   
     
     if (sControl->value()) feve=1;
      break;

     case 4:   
     
     if (sProgram->value()) feve=1;
      break;

     case 5:
     if (sPitchBend->value()) feve=1;
     break;

     default:
       feve=1;

   }

if (feve==0) continue;

if ((fcana) && (feve))
{

bzero(pos,sizeof(pos));
bzero(evento,sizeof(evento));
bzero(nota,sizeof(nota));
bzero(nota,sizeof(length));
bzero(velo,sizeof(velo));

rmgmo->convtickcompas(posi,i);

sprintf(length,"%s","-");
sprintf(velo,"%s","-");


switch (rmgmo->PEG[rmgmo->Variacion][i].tipo)
 { 
 case 2:
   
   strcpy(evento,"Note");
   
   rmgmo->convnota(noti,i);
   sprintf(velo,"%d",rmgmo->PEG[rmgmo->Variacion][i].velocity);
   sprintf(length,"%d",rmgmo->PEG[rmgmo->Variacion][i].length);
   
   break; 
 
 case 3:
   strcpy(evento,"Control");   
   sprintf(nota,"%s",rmgmo->CCn[rmgmo->PEG[rmgmo->Variacion][i].nota].Nom);
   sprintf(velo,"%d",rmgmo->PEG[rmgmo->Variacion][i].velocity);  
   break;
 case 4:
   strcpy(evento,"Program");    
    sprintf(nota,"%s",rmgmo->PresetList[rmgmo->CalculaBanco(rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][i].canal])].PBanco[rmgmo->PEG[rmgmo->Variacion][i].nota].ProgName);
   break;
 case 5:
   strcpy(evento,"PitchBend"); 
    sprintf(nota,"%d",rmgmo->PEG[rmgmo->Variacion][i].nota);   
   break;
 default:
   sprintf(evento,"%d", rmgmo->PEG[rmgmo->Variacion][i].tipo);
}




bzero(temp,sizeof(temp));
sprintf(temp, "@r@B52@_  %5d\t@r@B54@_%s\t@r@B52@_  %2d\t@c@B54@_  %s\t@c@B52@_  %s\t@c@B54@_  %s\t@c@B52@_   %s", i,pos,

rmgmo->PEG[rmgmo->Variacion][i].canal+1,evento,nota,velo,length);

EditBro->add(temp);

}
 
}

EditBro->redraw();
}

void rmgmedit::type_cb_i(Fl_Widget* o,void* v) {
  int i=0;
char temp[28];

chsel=(int)v;

switch (chsel)
{
case 0:
DNomCh->copy_label("All");
BaseChord->copy_label("---");
SChMidi->value(1);
break;
case 17:
DNomCh->copy_label("Drums");
BaseChord->copy_label("---");
SChMidi->value(10);
break;
default:
while ( (chsel -1) != rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].track)
   {
    i++;
    if (i>16) break;
   }
DNomCh->copy_label(rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].Name);
bzero(temp,sizeof(temp));

sprintf(temp,"%s%s",rmgmo->NCE[rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChRoot].Nom,rmgmo->ChN[rmgmo->nStyle.Pattern[rmgmo->Variacion].casm[i].ChType].Nom);
BaseChord->copy_label(temp);
SChMidi->value(chsel);
}



ReadPattern();
}

Fl_Double_Window* rmgmedit::make_eventwindow() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = Eventwin = new Fl_Double_Window(340, 290);
    w = o;
    o->color(FL_BACKGROUND2_COLOR);
    o->callback((Fl_Callback*)cb_Eventwin, (void*)(this));
    { Fl_Button* o = new Fl_Button(260, 250, 65, 25, gettext("Ok"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Ok1);
    }
    { Fl_Button* o = new Fl_Button(190, 250, 65, 25, gettext("Cancel"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Cancel1);
    }
    { Fl_Box* o = PosDis = new Fl_Box(175, 55, 155, 25);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
    }
    { Fl_Counter* o = SlPos = new Fl_Counter(15, 55, 155, 25, gettext("Position"));
      o->box(FL_PLASTIC_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->minimum(0);
      o->maximum(1);
      o->step(1);
      o->callback((Fl_Callback*)cb_SlPos);
      o->align(FL_ALIGN_TOP);
    }
    { Fl_Box* o = NotaDis = new Fl_Box(175, 100, 155, 25);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
    }
    { Fl_Counter* o = SlNote = new Fl_Counter(15, 100, 155, 25, gettext("Note"));
      o->box(FL_PLASTIC_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->minimum(0);
      o->maximum(127);
      o->step(1);
      o->callback((Fl_Callback*)cb_SlNote);
      o->align(FL_ALIGN_TOP);
    }
    { Fl_Counter* o = SlVal1 = new Fl_Counter(15, 160, 155, 25, gettext("Velocity"));
      o->box(FL_PLASTIC_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->minimum(0);
      o->maximum(127);
      o->step(1);
      o->align(FL_ALIGN_TOP);
    }
    { Fl_Counter* o = SlVal2 = new Fl_Counter(15, 210, 155, 25, gettext("Length"));
      o->box(FL_PLASTIC_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->minimum(0);
      o->maximum(1);
      o->step(1);
      o->align(FL_ALIGN_TOP);
    }
    { Fl_Box* o = DInfoq = new Fl_Box(15, 10, 315, 25);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Counter* o = SlVelo = new Fl_Counter(175, 160, 155, 25, gettext("% Velocity"));
      o->box(FL_PLASTIC_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->minimum(-50);
      o->maximum(50);
      o->step(1);
      o->align(FL_ALIGN_TOP);
    }
    { Fl_Check_Button* o = presvelo = new Fl_Check_Button(0, 135, 70, 15, gettext("Preserve"));
      o->down_box(FL_DOWN_BOX);
      o->labelsize(11);
      o->labelcolor((Fl_Color)1);
    }
    { Fl_Check_Button* o = preslength = new Fl_Check_Button(0, 190, 70, 15, gettext("Preserve"));
      o->down_box(FL_DOWN_BOX);
      o->labelsize(11);
      o->labelcolor((Fl_Color)1);
    }
    { Fl_Counter* o = SlLength = new Fl_Counter(175, 210, 155, 25, gettext("% Length"));
      o->box(FL_PLASTIC_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      o->labelsize(11);
      o->minimum(-50);
      o->maximum(50);
      o->step(1);
      o->align(FL_ALIGN_TOP);
    }
    o->end();
  }
  return w;
}

void rmgmedit::editaevento(int evento) {
  int x,y;

char tmp[64],tmp1[64];

Eventwin->hide();

static const char *pepe [] ={"stygmorgan"};

int argc=1;
char **argv= (char **) pepe;


rmgmo->selevent=evento;
rmgmo->selcanal=rmgmo->pcp[rmgmo->PEG[rmgmo->Variacion][evento].canal];
rmgmo->seltipo=rmgmo->PEG[rmgmo->Variacion][evento].tipo;




SlPos->show();
SlPos->maximum(rmgmo->longi -1);
SlPos->lstep(100);
SlPos->value((int)rmgmo->PEG[rmgmo->Variacion][evento].tick);
SlPos->do_callback();

if (sAllE->value())

  {
    SlPos->hide(); 
    presvelo->show();
    preslength->show();
    SlVelo->show();
    SlLength->show();
  }
 else 
  {
    SlPos->show();
    presvelo->hide();
    preslength->hide();
    SlVelo->hide();
    SlLength->hide();
    
  } 

SlNote->minimum(0);
SlNote->maximum(127);
SlNote->lstep(10);
SlNote->value((int)rmgmo->PEG[rmgmo->Variacion][evento].nota);
SlNote->do_callback();

SlVal1->label("Velocity");
SlVal1->lstep(10);
SlVal2->lstep(100);

SlVelo->label("% Velocity");
SlVelo->value(0);
SlVelo->lstep(10);


SlLength->value(0);
SlLength->lstep(10);


switch(rmgmo->seltipo)
{
         case 2:
         SlNote->label("Note");
         SlVal1->show();
         SlVal2->show();
         SlVal1->value((int)rmgmo->PEG[rmgmo->Variacion][evento].velocity);
         SlVal2->value((int)rmgmo->PEG[rmgmo->Variacion][evento].length);
         SlVal2->maximum(rmgmo->longi - rmgmo->PEG[rmgmo->Variacion][evento].tick);
         
         break;
         case 3:
         SlNote->label("Control");
         SlVal1->show();
         SlVal2->hide();
         SlVelo->label("% Value");
         SlVal1->label("Value");
         SlVal1->value((int)rmgmo->PEG[rmgmo->Variacion][evento].velocity);
         preslength->hide();
         SlLength->hide();
         break;
         case 4:
         SlNote->label("Program");
         SlVal1->hide();
         SlVal2->hide();
         presvelo->hide();
         preslength->hide();
         SlVelo->hide();
         SlLength->hide();     
         break;
         case 5:
         SlNote->minimum(-4096);
         SlNote->maximum(4096);
         SlNote->label("PitchBend");
         SlVal1->hide();
         SlVal2->hide();
         presvelo->hide();
         preslength->hide();
         SlVelo->hide();
         SlLength->hide();     



         }         


bzero(tmp,sizeof(tmp));
sprintf(tmp,"Event - %d",evento);

bzero(tmp1,sizeof(tmp1));
sprintf(tmp1,"Ticks per quarter : %d",rmgmo->nStyle.ppq);
DInfoq->copy_label(tmp1);

Fl::get_mouse(x,y);
Eventwin->position(x,y);
Eventwin->label(tmp);
Eventwin->show(argc,argv);
}

void rmgmedit::GuardaPrefs() {
  Fl_Preferences stygmorgan (Fl_Preferences::USER, WEBSITE , PACKAGE);

stygmorgan.set("rmgmeditwinX",rmgmeditwin->x());
stygmorgan.set("rmgmeditwinY",rmgmeditwin->y());
stygmorgan.set("rmgmeditwinW",rmgmeditwin->w());
stygmorgan.set("rmgmeditwinH",rmgmeditwin->h());
}
