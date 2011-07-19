// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef stygmsequi_h
#define stygmsequi_h
#include <FL/Fl.H>
#include <Fl/Fl_Scroll.H>
#include <FL/Fl_File_Chooser.H>
#include <Fl/Fl_Preferences.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Value_Input.H>
#include "stygmorgan.h"

class ElScroll : public Fl_Scroll {
public:
  ElScroll(int X, int Y, int W, int H, const char* L=0) ;
  void resize(int X, int Y,int W, int H);
};
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Box.H>

class sequencer {
public:
  sequencer(RMGMO *rmgmo_);
private:
  RMGMO *rmgmo; 
public:
  static void tick(void* v);
  Fl_Double_Window* make_window();
  Fl_Double_Window *stygmseqwin;
private:
  void cb_stygmseqwin_i(Fl_Double_Window*, void*);
  static void cb_stygmseqwin(Fl_Double_Window*, void*);
  static unsigned char menu__i18n_done;
  static Fl_Menu_Item menu_[];
  void cb_New_i(Fl_Menu_*, void*);
  static void cb_New(Fl_Menu_*, void*);
  void cb_Load_i(Fl_Menu_*, void*);
  static void cb_Load(Fl_Menu_*, void*);
  void cb_Save_i(Fl_Menu_*, void*);
  static void cb_Save(Fl_Menu_*, void*);
  void cb_Export_i(Fl_Menu_*, void*);
  static void cb_Export(Fl_Menu_*, void*);
  void cb_Close_i(Fl_Menu_*, void*);
  static void cb_Close(Fl_Menu_*, void*);
  void cb_Copy_i(Fl_Menu_*, void*);
  static void cb_Copy(Fl_Menu_*, void*);
  void cb_Delete_i(Fl_Menu_*, void*);
  static void cb_Delete(Fl_Menu_*, void*);
  void cb_Move_i(Fl_Menu_*, void*);
  static void cb_Move(Fl_Menu_*, void*);
  void cb_Tempo_i(Fl_Menu_*, void*);
  static void cb_Tempo(Fl_Menu_*, void*);
  void cb_Help_i(Fl_Menu_*, void*);
  static void cb_Help(Fl_Menu_*, void*);
  void cb_About_i(Fl_Menu_*, void*);
  static void cb_About(Fl_Menu_*, void*);
public:
  Fl_Input *Titulo;
private:
  void cb_Titulo_i(Fl_Input*, void*);
  static void cb_Titulo(Fl_Input*, void*);
public:
  Fl_Value_Input *STempo;
private:
  void cb_STempo_i(Fl_Value_Input*, void*);
  static void cb_STempo(Fl_Value_Input*, void*);
public:
  Fl_Group *Displays;
  Fl_Browser *BroSty;
  Fl_Browser *BroPat;
private:
  void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
public:
  Fl_Slider *Slider;
private:
  void cb_Slider_i(Fl_Slider*, void*);
  static void cb_Slider(Fl_Slider*, void*);
public:
  Fl_Button *SSTST;
private:
  void cb_SSTST_i(Fl_Button*, void*);
  static void cb_SSTST(Fl_Button*, void*);
public:
  Fl_Box *Casi;
private:
  void cb_Casi_i(Fl_Box*, void*);
  static void cb_Casi(Fl_Box*, void*);
public:
  Fl_Box *Bar;
  Fl_Browser *BroChord;
  Fl_Box *NomChord;
  Fl_Button *MTempoTrack;
private:
  void cb_MTempoTrack_i(Fl_Button*, void*);
  static void cb_MTempoTrack(Fl_Button*, void*);
public:
  Fl_Box *NomStyle;
  Fl_Box *NomPattern;
  ElScroll *Scr;
  static void song_call(Fl_Input* o, void* v);
  inline void song_call_i(Fl_Input* o, void*);
  static void song_call1(Fl_Value_Input* o, void* v);
  void song_call1_i(Fl_Value_Input* o, void*);
  static void song_call2(Fl_Button* o, void* v);
  inline void song_call2_i(Fl_Button* o, void*);
  void GeneraScroll();
  void GuardaPrefs();
  void NewSong();
  void prepara();
  Fl_Double_Window* prepara_WTT();
  Fl_Double_Window *WTT;
  Fl_Browser *TempoTrackBrowser;
private:
  void cb_TempoTrackBrowser_i(Fl_Browser*, void*);
  static void cb_TempoTrackBrowser(Fl_Browser*, void*);
public:
  Fl_Value_Input *WTTBar;
  Fl_Value_Input *WTTTempo;
private:
  void cb_Modify_i(Fl_Button*, void*);
  static void cb_Modify(Fl_Button*, void*);
public:
  Fl_Value_Input *WTTBlack;
private:
  void cb_Delete1_i(Fl_Button*, void*);
  static void cb_Delete1(Fl_Button*, void*);
  void cb_Add_i(Fl_Button*, void*);
  static void cb_Add(Fl_Button*, void*);
  void cb_Clear_i(Fl_Button*, void*);
  static void cb_Clear(Fl_Button*, void*);
  void cb_Close1_i(Fl_Button*, void*);
  static void cb_Close1(Fl_Button*, void*);
public:
  int CheckTempoValues();
  void saca_error(int num);
  Fl_Double_Window* PreparaEdit(int imenufunc);
  Fl_Double_Window *EditSeqwin;
private:
  void cb_EditSeqwin_i(Fl_Double_Window*, void*);
  static void cb_EditSeqwin(Fl_Double_Window*, void*);
  void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
  void cb_Ok_i(Fl_Button*, void*);
  static void cb_Ok(Fl_Button*, void*);
public:
  Fl_Value_Input *From;
  Fl_Value_Input *To;
  Fl_Value_Input *Destination;
  void Hazlo();
  void MetePats();
  void labelwin();
  int CheckForExport();
};
#endif
