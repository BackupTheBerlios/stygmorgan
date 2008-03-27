// generated by Fast Light User Interface Designer (fluid) version 1.0108

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
// Fl_Browser::redraw();
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

void rmgmedit::cb_EditBro_i(Fl_Browser* o, void*) {
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
//EditBro->redraw();
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
void rmgmedit::cb_EditBro(Fl_Browser* o, void* v) {
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
  //EditBro->redraw();
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
//EditBro->redraw();
ReadPattern();
}
void rmgmedit::cb_Help(Fl_Menu_* o, void* v) {
  ((rmgmedit*)(o->parent()->user_data()))->cb_Help_i(o,v);
}

void rmgmedit::cb_About_i(Fl_Menu_*, void*) {
  if(wabout) return;
wabout=1;
rmgmo->ventana=1;
//EditBro->redraw();
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
//EditBro->redraw();
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



static const int colsizes[]= {60,100,32,110,160,160,0};


make_window();

EditBro->column_widths((const int*) colsizes);

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
  { rmgmeditwin = new Fl_Double_Window(750, 535);
    rmgmeditwin->color(FL_BACKGROUND2_COLOR);
    rmgmeditwin->labelsize(11);
    rmgmeditwin->callback((Fl_Callback*)cb_rmgmeditwin, (void*)(this));
    { EditBro = new Fl_Browser(5, 130, 745, 405);
      EditBro->tooltip(gettext("Left Click Select - Rigth Click Edit"));
      EditBro->type(3);
      EditBro->callback((Fl_Callback*)cb_EditBro);
    } // Fl_Browser* EditBro
    { Fl_Group* o = new Fl_Group(5, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { sNote = new Fl_Check_Button(10, 65, 60, 15, gettext("Note"));
        sNote->down_box(FL_DOWN_BOX);
        sNote->labelsize(11);
        sNote->callback((Fl_Callback*)cb_sNote);
        sNote->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sNote
      { sControl = new Fl_Check_Button(10, 95, 60, 15, gettext("Control"));
        sControl->down_box(FL_DOWN_BOX);
        sControl->labelsize(11);
        sControl->callback((Fl_Callback*)cb_sControl);
        sControl->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sControl
      { sProgram = new Fl_Check_Button(10, 80, 65, 15, gettext("Program"));
        sProgram->down_box(FL_DOWN_BOX);
        sProgram->labelsize(11);
        sProgram->callback((Fl_Callback*)cb_sProgram);
        sProgram->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sProgram
      { sPitchBend = new Fl_Check_Button(10, 110, 80, 15, gettext("Pitch Bend"));
        sPitchBend->down_box(FL_DOWN_BOX);
        sPitchBend->labelsize(11);
        sPitchBend->callback((Fl_Callback*)cb_sPitchBend);
        sPitchBend->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sPitchBend
      o->end();
    } // Fl_Group* o
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 755, 20);
      o->color(FL_BACKGROUND2_COLOR);
      o->callback((Fl_Callback*)cb_);
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { Hear = new Fl_Button(595, 35, 35, 35, gettext("@<->"));
      Hear->tooltip(gettext("Hear Events"));
      Hear->type(1);
      Hear->color((Fl_Color)41);
      Hear->selection_color((Fl_Color)3);
      Hear->callback((Fl_Callback*)cb_Hear);
    } // Fl_Button* Hear
    { Fl_Box* o = new Fl_Box(100, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
    } // Fl_Box* o
    { SelCh = new Fl_Choice(105, 75, 80, 20, gettext("Midi Channel"));
      SelCh->down_box(FL_BORDER_BOX);
      SelCh->labelsize(11);
      SelCh->textsize(11);
      SelCh->align(FL_ALIGN_TOP_LEFT);
    } // Fl_Choice* SelCh
    { DNomCh = new Fl_Box(105, 100, 80, 25);
      DNomCh->box(FL_DOWN_BOX);
      DNomCh->color(FL_BACKGROUND2_COLOR);
      DNomCh->labelsize(11);
    } // Fl_Box* DNomCh
    { Disi = new Fl_Box(5, 35, 185, 20, gettext("Display"));
      Disi->box(FL_THIN_DOWN_BOX);
      Disi->color((Fl_Color)26);
      Disi->labeltype(FL_ENGRAVED_LABEL);
      Disi->labelfont(1);
      Disi->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    } // Fl_Box* Disi
    { Fl_Box* o = new Fl_Box(210, 35, 185, 20, gettext("Select"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)26);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelfont(1);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    } // Fl_Box* o
    { Fl_Group* o = new Fl_Group(210, 60, 185, 60);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { sAllE = new Fl_Check_Button(215, 65, 175, 20, gettext("All Equal Events"));
        sAllE->down_box(FL_DOWN_BOX);
        sAllE->labelsize(11);
        sAllE->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* sAllE
      { Fl_Button* o = new Fl_Button(220, 90, 80, 25, gettext("Edit"));
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Edit);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(305, 90, 80, 25, gettext("Delete"));
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Delete);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Box* o = new Fl_Box(405, 35, 185, 20, gettext("Insert"));
      o->box(FL_THIN_DOWN_BOX);
      o->color((Fl_Color)26);
      o->labeltype(FL_ENGRAVED_LABEL);
      o->labelfont(1);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    } // Fl_Box* o
    { Fl_Group* o = new Fl_Group(405, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { IsNote = new Fl_Check_Button(410, 65, 60, 15, gettext("Note"));
        IsNote->type(102);
        IsNote->down_box(FL_DOWN_BOX);
        IsNote->labelsize(11);
        IsNote->callback((Fl_Callback*)cb_IsNote);
        IsNote->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsNote
      { IsControl = new Fl_Check_Button(410, 95, 60, 15, gettext("Control"));
        IsControl->type(102);
        IsControl->down_box(FL_DOWN_BOX);
        IsControl->labelsize(11);
        IsControl->callback((Fl_Callback*)cb_IsControl);
        IsControl->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsControl
      { IsProgram = new Fl_Check_Button(410, 80, 65, 15, gettext("Program"));
        IsProgram->type(102);
        IsProgram->down_box(FL_DOWN_BOX);
        IsProgram->labelsize(11);
        IsProgram->callback((Fl_Callback*)cb_IsProgram);
        IsProgram->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsProgram
      { IsPitchBend = new Fl_Check_Button(410, 110, 80, 15, gettext("Pitch Bend"));
        IsPitchBend->type(102);
        IsPitchBend->down_box(FL_DOWN_BOX);
        IsPitchBend->labelsize(11);
        IsPitchBend->callback((Fl_Callback*)cb_IsPitchBend);
        IsPitchBend->when(FL_WHEN_CHANGED);
      } // Fl_Check_Button* IsPitchBend
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(660, 55, 85, 25, gettext("Ok"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Ok);
    } // Fl_Button* o
    { Fl_Group* o = new Fl_Group(500, 60, 90, 70);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_BACKGROUND2_COLOR);
      { Fl_Button* o = new Fl_Button(505, 65, 80, 25, gettext("Insert"));
        o->labelsize(11);
        o->callback((Fl_Callback*)cb_Insert);
      } // Fl_Button* o
      { SChMidi = new Fl_Counter(505, 105, 80, 20, gettext("Midi Ch."));
        SChMidi->type(1);
        SChMidi->box(FL_PLASTIC_THIN_DOWN_BOX);
        SChMidi->color(FL_BACKGROUND2_COLOR);
        SChMidi->labelsize(11);
        SChMidi->minimum(1);
        SChMidi->maximum(16);
        SChMidi->step(1);
        SChMidi->value(10);
        SChMidi->align(FL_ALIGN_TOP);
      } // Fl_Counter* SChMidi
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(660, 25, 85, 25, gettext("Cancel"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    { BaseChord = new Fl_Box(600, 100, 145, 25);
      BaseChord->box(FL_DOWN_BOX);
      BaseChord->color(FL_BACKGROUND2_COLOR);
      BaseChord->labelsize(11);
      BaseChord->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    } // Fl_Box* BaseChord
    { LabelBaseChord = new Fl_Box(600, 85, 145, 15, gettext("Base Chord"));
      LabelBaseChord->box(FL_THIN_DOWN_BOX);
      LabelBaseChord->color((Fl_Color)17);
      LabelBaseChord->labeltype(FL_ENGRAVED_LABEL);
      LabelBaseChord->labelfont(1);
      LabelBaseChord->labelsize(12);
      LabelBaseChord->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    } // Fl_Box* LabelBaseChord
    rmgmeditwin->size_range(800, 600);
    rmgmeditwin->end();
    rmgmeditwin->resizable(rmgmeditwin);
  } // Fl_Double_Window* rmgmeditwin
  return rmgmeditwin;
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

// EditBro->redraw();
}

void rmgmedit::type_cb_i(Fl_Widget* o,void* v) {
  int i=0;
char temp[28];
long long cast_v=(long long)v;


chsel=(int)cast_v;

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
  { Eventwin = new Fl_Double_Window(340, 290);
    Eventwin->color(FL_BACKGROUND2_COLOR);
    Eventwin->callback((Fl_Callback*)cb_Eventwin, (void*)(this));
    { Fl_Button* o = new Fl_Button(260, 250, 65, 25, gettext("Ok"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Ok1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(190, 250, 65, 25, gettext("Cancel"));
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Cancel1);
    } // Fl_Button* o
    { PosDis = new Fl_Box(175, 55, 155, 25);
      PosDis->box(FL_THIN_DOWN_BOX);
      PosDis->color(FL_BACKGROUND2_COLOR);
      PosDis->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
    } // Fl_Box* PosDis
    { SlPos = new Fl_Counter(15, 55, 155, 25, gettext("Position"));
      SlPos->box(FL_PLASTIC_THIN_DOWN_BOX);
      SlPos->color(FL_BACKGROUND2_COLOR);
      SlPos->labelsize(11);
      SlPos->minimum(0);
      SlPos->maximum(1);
      SlPos->step(1);
      SlPos->callback((Fl_Callback*)cb_SlPos);
      SlPos->align(FL_ALIGN_TOP);
    } // Fl_Counter* SlPos
    { NotaDis = new Fl_Box(175, 100, 155, 25);
      NotaDis->box(FL_THIN_DOWN_BOX);
      NotaDis->color(FL_BACKGROUND2_COLOR);
      NotaDis->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
    } // Fl_Box* NotaDis
    { SlNote = new Fl_Counter(15, 100, 155, 25, gettext("Note"));
      SlNote->box(FL_PLASTIC_THIN_DOWN_BOX);
      SlNote->color(FL_BACKGROUND2_COLOR);
      SlNote->labelsize(11);
      SlNote->minimum(0);
      SlNote->maximum(127);
      SlNote->step(1);
      SlNote->callback((Fl_Callback*)cb_SlNote);
      SlNote->align(FL_ALIGN_TOP);
    } // Fl_Counter* SlNote
    { SlVal1 = new Fl_Counter(15, 160, 155, 25, gettext("Velocity"));
      SlVal1->box(FL_PLASTIC_THIN_DOWN_BOX);
      SlVal1->color(FL_BACKGROUND2_COLOR);
      SlVal1->labelsize(11);
      SlVal1->minimum(0);
      SlVal1->maximum(127);
      SlVal1->step(1);
      SlVal1->align(FL_ALIGN_TOP);
    } // Fl_Counter* SlVal1
    { SlVal2 = new Fl_Counter(15, 210, 155, 25, gettext("Length"));
      SlVal2->box(FL_PLASTIC_THIN_DOWN_BOX);
      SlVal2->color(FL_BACKGROUND2_COLOR);
      SlVal2->labelsize(11);
      SlVal2->minimum(0);
      SlVal2->maximum(1);
      SlVal2->step(1);
      SlVal2->align(FL_ALIGN_TOP);
    } // Fl_Counter* SlVal2
    { DInfoq = new Fl_Box(15, 10, 315, 25);
      DInfoq->box(FL_THIN_DOWN_BOX);
      DInfoq->color(FL_BACKGROUND2_COLOR);
      DInfoq->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    } // Fl_Box* DInfoq
    { SlVelo = new Fl_Counter(175, 160, 155, 25, gettext("% Velocity"));
      SlVelo->box(FL_PLASTIC_THIN_DOWN_BOX);
      SlVelo->color(FL_BACKGROUND2_COLOR);
      SlVelo->labelsize(11);
      SlVelo->minimum(-50);
      SlVelo->maximum(50);
      SlVelo->step(1);
      SlVelo->align(FL_ALIGN_TOP);
    } // Fl_Counter* SlVelo
    { presvelo = new Fl_Check_Button(0, 135, 70, 15, gettext("Preserve"));
      presvelo->down_box(FL_DOWN_BOX);
      presvelo->labelsize(11);
      presvelo->labelcolor((Fl_Color)1);
    } // Fl_Check_Button* presvelo
    { preslength = new Fl_Check_Button(0, 190, 70, 15, gettext("Preserve"));
      preslength->down_box(FL_DOWN_BOX);
      preslength->labelsize(11);
      preslength->labelcolor((Fl_Color)1);
    } // Fl_Check_Button* preslength
    { SlLength = new Fl_Counter(175, 210, 155, 25, gettext("% Length"));
      SlLength->box(FL_PLASTIC_THIN_DOWN_BOX);
      SlLength->color(FL_BACKGROUND2_COLOR);
      SlLength->labelsize(11);
      SlLength->minimum(-50);
      SlLength->maximum(50);
      SlLength->step(1);
      SlLength->align(FL_ALIGN_TOP);
    } // Fl_Counter* SlLength
    Eventwin->end();
  } // Fl_Double_Window* Eventwin
  return Eventwin;
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
