// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef stygmstui_h
#define stygmstui_h
#include <FL/Fl.H>
#include "stygmorgan.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Counter.H>

class rmgmstye {
public:
  rmgmstye(RMGMO *rmgmo_);
private:
  RMGMO *rmgmo; 
public:
  Fl_Double_Window* make_window();
  Fl_Double_Window *rmgmstyewin;
private:
  void cb_rmgmstyewin_i(Fl_Double_Window*, void*);
  static void cb_rmgmstyewin(Fl_Double_Window*, void*);
public:
  Fl_Input *EName;
private:
  void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
  void cb_Ok_i(Fl_Button*, void*);
  static void cb_Ok(Fl_Button*, void*);
public:
  Fl_Choice *Estyle;
  Fl_Counter *StTempo;
};
#endif
