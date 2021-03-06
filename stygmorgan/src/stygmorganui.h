// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef stygmorganui_h
#define stygmorganui_h
#include <FL/Fl.H>
#include <FL/x.H>
#include <X11/xpm.h>
#include <FL/Fl_File_Chooser.H>
#include "stygmorgan.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Dial.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Counter.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Output.H>

class stygmorgan {
  RMGMO *rmgmo; 
public:
  Fl_Double_Window* make_window();
  Fl_Double_Window *rmgmorganwin;
private:
  void cb_rmgmorganwin_i(Fl_Double_Window*, void*);
  static void cb_rmgmorganwin(Fl_Double_Window*, void*);
public:
  Fl_Dial *Pan0;
private:
  void cb_Pan0_i(Fl_Dial*, void*);
  static void cb_Pan0(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb0;
private:
  void cb_Reverb0_i(Fl_Dial*, void*);
  static void cb_Reverb0(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus0;
private:
  void cb_Chorus0_i(Fl_Dial*, void*);
  static void cb_Chorus0(Fl_Dial*, void*);
public:
  Fl_Slider *Vol0;
private:
  void cb_Vol0_i(Fl_Slider*, void*);
  static void cb_Vol0(Fl_Slider*, void*);
public:
  Fl_Button *On0;
private:
  void cb_On0_i(Fl_Button*, void*);
  static void cb_On0(Fl_Button*, void*);
public:
  Fl_Button *Solo0;
private:
  void cb_Solo0_i(Fl_Button*, void*);
  static void cb_Solo0(Fl_Button*, void*);
public:
  Fl_Button *More0;
private:
  void cb_More0_i(Fl_Button*, void*);
  static void cb_More0(Fl_Button*, void*);
public:
  Fl_Counter *P0;
private:
  void cb_P0_i(Fl_Counter*, void*);
  static void cb_P0(Fl_Counter*, void*);
public:
  Fl_Box *DP0;
  Fl_Dial *Pan1;
private:
  void cb_Pan1_i(Fl_Dial*, void*);
  static void cb_Pan1(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb1;
private:
  void cb_Reverb1_i(Fl_Dial*, void*);
  static void cb_Reverb1(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus1;
private:
  void cb_Chorus1_i(Fl_Dial*, void*);
  static void cb_Chorus1(Fl_Dial*, void*);
public:
  Fl_Slider *Vol1;
private:
  void cb_Vol1_i(Fl_Slider*, void*);
  static void cb_Vol1(Fl_Slider*, void*);
public:
  Fl_Button *On1;
private:
  void cb_On1_i(Fl_Button*, void*);
  static void cb_On1(Fl_Button*, void*);
public:
  Fl_Button *Solo1;
private:
  void cb_Solo1_i(Fl_Button*, void*);
  static void cb_Solo1(Fl_Button*, void*);
public:
  Fl_Button *More1;
private:
  void cb_More1_i(Fl_Button*, void*);
  static void cb_More1(Fl_Button*, void*);
public:
  Fl_Counter *P1;
private:
  void cb_P1_i(Fl_Counter*, void*);
  static void cb_P1(Fl_Counter*, void*);
public:
  Fl_Box *DP1;
  Fl_Dial *Pan2;
private:
  void cb_Pan2_i(Fl_Dial*, void*);
  static void cb_Pan2(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb2;
private:
  void cb_Reverb2_i(Fl_Dial*, void*);
  static void cb_Reverb2(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus2;
private:
  void cb_Chorus2_i(Fl_Dial*, void*);
  static void cb_Chorus2(Fl_Dial*, void*);
public:
  Fl_Slider *Vol2;
private:
  void cb_Vol2_i(Fl_Slider*, void*);
  static void cb_Vol2(Fl_Slider*, void*);
public:
  Fl_Button *On2;
private:
  void cb_On2_i(Fl_Button*, void*);
  static void cb_On2(Fl_Button*, void*);
public:
  Fl_Button *Solo2;
private:
  void cb_Solo2_i(Fl_Button*, void*);
  static void cb_Solo2(Fl_Button*, void*);
public:
  Fl_Button *More2;
private:
  void cb_More2_i(Fl_Button*, void*);
  static void cb_More2(Fl_Button*, void*);
public:
  Fl_Counter *P2;
private:
  void cb_P2_i(Fl_Counter*, void*);
  static void cb_P2(Fl_Counter*, void*);
public:
  Fl_Box *DP2;
  Fl_Dial *Pan3;
private:
  void cb_Pan3_i(Fl_Dial*, void*);
  static void cb_Pan3(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb3;
private:
  void cb_Reverb3_i(Fl_Dial*, void*);
  static void cb_Reverb3(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus3;
private:
  void cb_Chorus3_i(Fl_Dial*, void*);
  static void cb_Chorus3(Fl_Dial*, void*);
public:
  Fl_Slider *Vol3;
private:
  void cb_Vol3_i(Fl_Slider*, void*);
  static void cb_Vol3(Fl_Slider*, void*);
public:
  Fl_Button *On3;
private:
  void cb_On3_i(Fl_Button*, void*);
  static void cb_On3(Fl_Button*, void*);
public:
  Fl_Button *Solo3;
private:
  void cb_Solo3_i(Fl_Button*, void*);
  static void cb_Solo3(Fl_Button*, void*);
public:
  Fl_Button *More3;
private:
  void cb_More3_i(Fl_Button*, void*);
  static void cb_More3(Fl_Button*, void*);
public:
  Fl_Counter *P3;
private:
  void cb_P3_i(Fl_Counter*, void*);
  static void cb_P3(Fl_Counter*, void*);
public:
  Fl_Box *DP3;
  Fl_Dial *Pan4;
private:
  void cb_Pan4_i(Fl_Dial*, void*);
  static void cb_Pan4(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb4;
private:
  void cb_Reverb4_i(Fl_Dial*, void*);
  static void cb_Reverb4(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus4;
private:
  void cb_Chorus4_i(Fl_Dial*, void*);
  static void cb_Chorus4(Fl_Dial*, void*);
public:
  Fl_Slider *Vol4;
private:
  void cb_Vol4_i(Fl_Slider*, void*);
  static void cb_Vol4(Fl_Slider*, void*);
public:
  Fl_Button *On4;
private:
  void cb_On4_i(Fl_Button*, void*);
  static void cb_On4(Fl_Button*, void*);
public:
  Fl_Button *Solo4;
private:
  void cb_Solo4_i(Fl_Button*, void*);
  static void cb_Solo4(Fl_Button*, void*);
public:
  Fl_Button *More4;
private:
  void cb_More4_i(Fl_Button*, void*);
  static void cb_More4(Fl_Button*, void*);
public:
  Fl_Counter *P4;
private:
  void cb_P4_i(Fl_Counter*, void*);
  static void cb_P4(Fl_Counter*, void*);
public:
  Fl_Box *DP4;
  Fl_Dial *Pan9;
private:
  void cb_Pan9_i(Fl_Dial*, void*);
  static void cb_Pan9(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb9;
private:
  void cb_Reverb9_i(Fl_Dial*, void*);
  static void cb_Reverb9(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus9;
private:
  void cb_Chorus9_i(Fl_Dial*, void*);
  static void cb_Chorus9(Fl_Dial*, void*);
public:
  Fl_Slider *Vol9;
private:
  void cb_Vol9_i(Fl_Slider*, void*);
  static void cb_Vol9(Fl_Slider*, void*);
public:
  Fl_Button *On9;
private:
  void cb_On9_i(Fl_Button*, void*);
  static void cb_On9(Fl_Button*, void*);
public:
  Fl_Button *Solo9;
private:
  void cb_Solo9_i(Fl_Button*, void*);
  static void cb_Solo9(Fl_Button*, void*);
public:
  Fl_Button *More9;
private:
  void cb_More9_i(Fl_Button*, void*);
  static void cb_More9(Fl_Button*, void*);
public:
  Fl_Counter *P9;
private:
  void cb_P9_i(Fl_Counter*, void*);
  static void cb_P9(Fl_Counter*, void*);
public:
  Fl_Box *DP9;
  Fl_Group *VumCanal9;
  Fl_Dial *Pan10;
private:
  void cb_Pan10_i(Fl_Dial*, void*);
  static void cb_Pan10(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb10;
private:
  void cb_Reverb10_i(Fl_Dial*, void*);
  static void cb_Reverb10(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus10;
private:
  void cb_Chorus10_i(Fl_Dial*, void*);
  static void cb_Chorus10(Fl_Dial*, void*);
public:
  Fl_Slider *Vol10;
private:
  void cb_Vol10_i(Fl_Slider*, void*);
  static void cb_Vol10(Fl_Slider*, void*);
public:
  Fl_Button *On10;
private:
  void cb_On10_i(Fl_Button*, void*);
  static void cb_On10(Fl_Button*, void*);
public:
  Fl_Button *Solo10;
private:
  void cb_Solo10_i(Fl_Button*, void*);
  static void cb_Solo10(Fl_Button*, void*);
public:
  Fl_Button *More10;
private:
  void cb_More10_i(Fl_Button*, void*);
  static void cb_More10(Fl_Button*, void*);
public:
  Fl_Counter *P10;
private:
  void cb_P10_i(Fl_Counter*, void*);
  static void cb_P10(Fl_Counter*, void*);
public:
  Fl_Box *DP10;
  Fl_Group *VumCanal10;
  Fl_Dial *Pan11;
private:
  void cb_Pan11_i(Fl_Dial*, void*);
  static void cb_Pan11(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb11;
private:
  void cb_Reverb11_i(Fl_Dial*, void*);
  static void cb_Reverb11(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus11;
private:
  void cb_Chorus11_i(Fl_Dial*, void*);
  static void cb_Chorus11(Fl_Dial*, void*);
public:
  Fl_Slider *Vol11;
private:
  void cb_Vol11_i(Fl_Slider*, void*);
  static void cb_Vol11(Fl_Slider*, void*);
public:
  Fl_Button *On11;
private:
  void cb_On11_i(Fl_Button*, void*);
  static void cb_On11(Fl_Button*, void*);
public:
  Fl_Button *Solo11;
private:
  void cb_Solo11_i(Fl_Button*, void*);
  static void cb_Solo11(Fl_Button*, void*);
public:
  Fl_Button *More11;
private:
  void cb_More11_i(Fl_Button*, void*);
  static void cb_More11(Fl_Button*, void*);
public:
  Fl_Counter *P11;
private:
  void cb_P11_i(Fl_Counter*, void*);
  static void cb_P11(Fl_Counter*, void*);
public:
  Fl_Box *DP11;
  Fl_Group *VumCanal11;
  Fl_Dial *Pan12;
private:
  void cb_Pan12_i(Fl_Dial*, void*);
  static void cb_Pan12(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb12;
private:
  void cb_Reverb12_i(Fl_Dial*, void*);
  static void cb_Reverb12(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus12;
private:
  void cb_Chorus12_i(Fl_Dial*, void*);
  static void cb_Chorus12(Fl_Dial*, void*);
public:
  Fl_Slider *Vol12;
private:
  void cb_Vol12_i(Fl_Slider*, void*);
  static void cb_Vol12(Fl_Slider*, void*);
public:
  Fl_Button *On12;
private:
  void cb_On12_i(Fl_Button*, void*);
  static void cb_On12(Fl_Button*, void*);
public:
  Fl_Button *Solo12;
private:
  void cb_Solo12_i(Fl_Button*, void*);
  static void cb_Solo12(Fl_Button*, void*);
public:
  Fl_Button *More12;
private:
  void cb_More12_i(Fl_Button*, void*);
  static void cb_More12(Fl_Button*, void*);
public:
  Fl_Counter *P12;
private:
  void cb_P12_i(Fl_Counter*, void*);
  static void cb_P12(Fl_Counter*, void*);
public:
  Fl_Box *DP12;
  Fl_Group *VumCanal12;
  Fl_Dial *Pan13;
private:
  void cb_Pan13_i(Fl_Dial*, void*);
  static void cb_Pan13(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb13;
private:
  void cb_Reverb13_i(Fl_Dial*, void*);
  static void cb_Reverb13(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus13;
private:
  void cb_Chorus13_i(Fl_Dial*, void*);
  static void cb_Chorus13(Fl_Dial*, void*);
public:
  Fl_Slider *Vol13;
private:
  void cb_Vol13_i(Fl_Slider*, void*);
  static void cb_Vol13(Fl_Slider*, void*);
public:
  Fl_Button *On13;
private:
  void cb_On13_i(Fl_Button*, void*);
  static void cb_On13(Fl_Button*, void*);
public:
  Fl_Button *Solo13;
private:
  void cb_Solo13_i(Fl_Button*, void*);
  static void cb_Solo13(Fl_Button*, void*);
public:
  Fl_Button *More13;
private:
  void cb_More13_i(Fl_Button*, void*);
  static void cb_More13(Fl_Button*, void*);
public:
  Fl_Counter *P13;
private:
  void cb_P13_i(Fl_Counter*, void*);
  static void cb_P13(Fl_Counter*, void*);
public:
  Fl_Box *DP13;
  Fl_Group *VumCanal13;
  Fl_Dial *Pan14;
private:
  void cb_Pan14_i(Fl_Dial*, void*);
  static void cb_Pan14(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb14;
private:
  void cb_Reverb14_i(Fl_Dial*, void*);
  static void cb_Reverb14(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus14;
private:
  void cb_Chorus14_i(Fl_Dial*, void*);
  static void cb_Chorus14(Fl_Dial*, void*);
public:
  Fl_Slider *Vol14;
private:
  void cb_Vol14_i(Fl_Slider*, void*);
  static void cb_Vol14(Fl_Slider*, void*);
public:
  Fl_Button *On14;
private:
  void cb_On14_i(Fl_Button*, void*);
  static void cb_On14(Fl_Button*, void*);
public:
  Fl_Button *Solo14;
private:
  void cb_Solo14_i(Fl_Button*, void*);
  static void cb_Solo14(Fl_Button*, void*);
public:
  Fl_Button *More14;
private:
  void cb_More14_i(Fl_Button*, void*);
  static void cb_More14(Fl_Button*, void*);
public:
  Fl_Counter *P14;
private:
  void cb_P14_i(Fl_Counter*, void*);
  static void cb_P14(Fl_Counter*, void*);
public:
  Fl_Box *DP14;
  Fl_Group *VumCanal14;
  Fl_Dial *Pan15;
private:
  void cb_Pan15_i(Fl_Dial*, void*);
  static void cb_Pan15(Fl_Dial*, void*);
public:
  Fl_Dial *Reverb15;
private:
  void cb_Reverb15_i(Fl_Dial*, void*);
  static void cb_Reverb15(Fl_Dial*, void*);
public:
  Fl_Dial *Chorus15;
private:
  void cb_Chorus15_i(Fl_Dial*, void*);
  static void cb_Chorus15(Fl_Dial*, void*);
public:
  Fl_Slider *Vol15;
private:
  void cb_Vol15_i(Fl_Slider*, void*);
  static void cb_Vol15(Fl_Slider*, void*);
public:
  Fl_Button *On15;
private:
  void cb_On15_i(Fl_Button*, void*);
  static void cb_On15(Fl_Button*, void*);
public:
  Fl_Button *Solo15;
private:
  void cb_Solo15_i(Fl_Button*, void*);
  static void cb_Solo15(Fl_Button*, void*);
public:
  Fl_Button *More15;
private:
  void cb_More15_i(Fl_Button*, void*);
  static void cb_More15(Fl_Button*, void*);
public:
  Fl_Counter *P15;
private:
  void cb_P15_i(Fl_Counter*, void*);
  static void cb_P15(Fl_Counter*, void*);
public:
  Fl_Box *DP15;
  Fl_Group *VumCanal15;
  Fl_Menu_Bar *Menu;
  static unsigned char menu_Menu_i18n_done;
  static Fl_Menu_Item menu_Menu[];
  static Fl_Menu_Item *File;
  static Fl_Menu_Item *NewSound;
private:
  void cb_NewSound_i(Fl_Menu_*, void*);
  static void cb_NewSound(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *LoadSounds;
private:
  void cb_LoadSounds_i(Fl_Menu_*, void*);
  static void cb_LoadSounds(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *SaveSounds;
private:
  void cb_SaveSounds_i(Fl_Menu_*, void*);
  static void cb_SaveSounds(Fl_Menu_*, void*);
  void cb_Delete_i(Fl_Menu_*, void*);
  static void cb_Delete(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *LoadStyles;
private:
  void cb_LoadStyles_i(Fl_Menu_*, void*);
  static void cb_LoadStyles(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *SaveStyles;
private:
  void cb_SaveStyles_i(Fl_Menu_*, void*);
  static void cb_SaveStyles(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *DelStyle;
private:
  void cb_DelStyle_i(Fl_Menu_*, void*);
  static void cb_DelStyle(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *ImportSty;
private:
  void cb_ImportSty_i(Fl_Menu_*, void*);
  static void cb_ImportSty(Fl_Menu_*, void*);
  void cb_New_i(Fl_Menu_*, void*);
  static void cb_New(Fl_Menu_*, void*);
  void cb_Read_i(Fl_Menu_*, void*);
  static void cb_Read(Fl_Menu_*, void*);
  void cb_Save_i(Fl_Menu_*, void*);
  static void cb_Save(Fl_Menu_*, void*);
  void cb_Delete1_i(Fl_Menu_*, void*);
  static void cb_Delete1(Fl_Menu_*, void*);
  void cb_Load_i(Fl_Menu_*, void*);
  static void cb_Load(Fl_Menu_*, void*);
  void cb_Load1_i(Fl_Menu_*, void*);
  static void cb_Load1(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *Exit;
private:
  void cb_Exit_i(Fl_Menu_*, void*);
  static void cb_Exit(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *sEdit;
  static Fl_Menu_Item *EPattern;
private:
  void cb_EPattern_i(Fl_Menu_*, void*);
  static void cb_EPattern(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *MixerE;
private:
  void cb_MixerE_i(Fl_Menu_*, void*);
  static void cb_MixerE(Fl_Menu_*, void*);
  void cb_Pattern_i(Fl_Menu_*, void*);
  static void cb_Pattern(Fl_Menu_*, void*);
  void cb_Style_i(Fl_Menu_*, void*);
  static void cb_Style(Fl_Menu_*, void*);
  void cb_Preferences_i(Fl_Menu_*, void*);
  static void cb_Preferences(Fl_Menu_*, void*);
public:
  static Fl_Menu_Item *ElSeq;
private:
  void cb_ElSeq_i(Fl_Menu_*, void*);
  static void cb_ElSeq(Fl_Menu_*, void*);
  void cb_Help_i(Fl_Menu_*, void*);
  static void cb_Help(Fl_Menu_*, void*);
  void cb_About_i(Fl_Menu_*, void*);
  static void cb_About(Fl_Menu_*, void*);
public:
  Fl_Box *VName;
  Fl_Dial *RTempo;
private:
  void cb_RTempo_i(Fl_Dial*, void*);
  static void cb_RTempo(Fl_Dial*, void*);
public:
  Fl_Box *DTempo;
  Fl_Counter *CTempo;
private:
  void cb_CTempo_i(Fl_Counter*, void*);
  static void cb_CTempo(Fl_Counter*, void*);
public:
  Fl_Browser *ListaStyles;
private:
  void cb_ListaStyles_i(Fl_Browser*, void*);
  static void cb_ListaStyles(Fl_Browser*, void*);
public:
  Fl_Browser *ListaSounds;
private:
  void cb_ListaSounds_i(Fl_Browser*, void*);
  static void cb_ListaSounds(Fl_Browser*, void*);
public:
  Fl_Button *STST;
private:
  void cb_STST_i(Fl_Button*, void*);
  static void cb_STST(Fl_Button*, void*);
public:
  Fl_Box *DCompas;
private:
  void cb_DCompas_i(Fl_Box*, void*);
  static void cb_DCompas(Fl_Box*, void*);
public:
  Fl_Group *marker;
  Fl_Button *N2;
  Fl_Button *N3;
  Fl_Button *N4;
  Fl_Button *N1;
  Fl_Button *Sso;
private:
  void cb_Sso_i(Fl_Button*, void*);
  static void cb_Sso(Fl_Button*, void*);
public:
  Fl_Button *Sst;
private:
  void cb_Sst_i(Fl_Button*, void*);
  static void cb_Sst(Fl_Button*, void*);
public:
  Fl_Slider *DMidi;
  Fl_Counter *PonTranspose;
private:
  void cb_PonTranspose_i(Fl_Counter*, void*);
  static void cb_PonTranspose(Fl_Counter*, void*);
public:
  Fl_Box *Dsel;
  Fl_Slider *VolKeyb;
private:
  void cb_VolKeyb_i(Fl_Slider*, void*);
  static void cb_VolKeyb(Fl_Slider*, void*);
public:
  Fl_Slider *VolAcc;
private:
  void cb_VolAcc_i(Fl_Slider*, void*);
  static void cb_VolAcc(Fl_Slider*, void*);
public:
  Fl_Choice *SelectType;
private:
  void cb_SelectType_i(Fl_Choice*, void*);
  static void cb_SelectType(Fl_Choice*, void*);
public:
  Fl_Counter *PonSplit;
private:
  void cb_PonSplit_i(Fl_Counter*, void*);
  static void cb_PonSplit(Fl_Counter*, void*);
public:
  Fl_Box *DSplit;
  Fl_Button *FGBM;
private:
  void cb_FGBM_i(Fl_Button*, void*);
  static void cb_FGBM(Fl_Button*, void*);
public:
  Fl_Button *FG;
private:
  void cb_FG_i(Fl_Button*, void*);
  static void cb_FG(Fl_Button*, void*);
public:
  Fl_Button *STSync;
private:
  void cb_STSync_i(Fl_Button*, void*);
  static void cb_STSync(Fl_Button*, void*);
public:
  Fl_Output *DMidiInDevice;
  Fl_Output *DMidiOutDevice;
  Fl_Browser *BroReg;
private:
  void cb_BroReg_i(Fl_Browser*, void*);
  static void cb_BroReg(Fl_Browser*, void*);
public:
  Fl_Group *Botones;
  Fl_Button *bMainA;
private:
  void cb_bMainA_i(Fl_Button*, void*);
  static void cb_bMainA(Fl_Button*, void*);
public:
  Fl_Button *bMainB;
private:
  void cb_bMainB_i(Fl_Button*, void*);
  static void cb_bMainB(Fl_Button*, void*);
public:
  Fl_Button *bMainC;
private:
  void cb_bMainC_i(Fl_Button*, void*);
  static void cb_bMainC(Fl_Button*, void*);
public:
  Fl_Button *bMainD;
private:
  void cb_bMainD_i(Fl_Button*, void*);
  static void cb_bMainD(Fl_Button*, void*);
public:
  Fl_Button *bEndingA;
private:
  void cb_bEndingA_i(Fl_Button*, void*);
  static void cb_bEndingA(Fl_Button*, void*);
public:
  Fl_Button *bEndingB;
private:
  void cb_bEndingB_i(Fl_Button*, void*);
  static void cb_bEndingB(Fl_Button*, void*);
public:
  Fl_Button *bEndingC;
private:
  void cb_bEndingC_i(Fl_Button*, void*);
  static void cb_bEndingC(Fl_Button*, void*);
public:
  Fl_Button *bIntroA;
private:
  void cb_bIntroA_i(Fl_Button*, void*);
  static void cb_bIntroA(Fl_Button*, void*);
public:
  Fl_Button *bIntroB;
private:
  void cb_bIntroB_i(Fl_Button*, void*);
  static void cb_bIntroB(Fl_Button*, void*);
public:
  Fl_Button *bIntroC;
private:
  void cb_bIntroC_i(Fl_Button*, void*);
  static void cb_bIntroC(Fl_Button*, void*);
public:
  Fl_Button *bFillAA;
private:
  void cb_bFillAA_i(Fl_Button*, void*);
  static void cb_bFillAA(Fl_Button*, void*);
public:
  Fl_Button *bFillAB;
private:
  void cb_bFillAB_i(Fl_Button*, void*);
  static void cb_bFillAB(Fl_Button*, void*);
public:
  Fl_Button *bFillBA;
private:
  void cb_bFillBA_i(Fl_Button*, void*);
  static void cb_bFillBA(Fl_Button*, void*);
public:
  Fl_Button *bFillBB;
private:
  void cb_bFillBB_i(Fl_Button*, void*);
  static void cb_bFillBB(Fl_Button*, void*);
public:
  Fl_Button *bFillCC;
private:
  void cb_bFillCC_i(Fl_Button*, void*);
  static void cb_bFillCC(Fl_Button*, void*);
public:
  Fl_Button *bFillDD;
private:
  void cb_bFillDD_i(Fl_Button*, void*);
  static void cb_bFillDD(Fl_Button*, void*);
public:
  Fl_Button *AutoFill;
private:
  void cb_AutoFill_i(Fl_Button*, void*);
  static void cb_AutoFill(Fl_Button*, void*);
public:
  Fl_Box *VChord;
  Fl_Box *VSound;
  Fl_Box *VStyle;
  stygmorgan(int argc, char **argv,RMGMO *rmgmo_);
  static void tick(void* v);
  Fl_Double_Window* MoreParams(int i);
  Fl_Double_Window *More;
private:
  void cb_More_i(Fl_Double_Window*, void*);
  static void cb_More(Fl_Double_Window*, void*);
public:
  Fl_Counter *Octave;
private:
  void cb_Octave_i(Fl_Counter*, void*);
  static void cb_Octave(Fl_Counter*, void*);
public:
  Fl_Counter *Transpose;
private:
  void cb_Transpose_i(Fl_Counter*, void*);
  static void cb_Transpose(Fl_Counter*, void*);
public:
  Fl_Counter *bMSB;
private:
  void cb_bMSB_i(Fl_Counter*, void*);
  static void cb_bMSB(Fl_Counter*, void*);
public:
  Fl_Counter *bLSB;
private:
  void cb_bLSB_i(Fl_Counter*, void*);
  static void cb_bLSB(Fl_Counter*, void*);
  void cb_Ok_i(Fl_Button*, void*);
  static void cb_Ok(Fl_Button*, void*);
public:
  Fl_Box *LMore;
  void ponmix();
  void PonSolo(int mcanal);
  void ActuaOnOff();
  void QuitaSolo();
  void ActuaSolo();
  void Actua_More();
  void pontempo();
  void Leer_Styles(int num);
  void EnAp();
  void ActuaBoton();
  void CVari(int boton,int vari);
  void buscala();
  void Leer_Sounds();
  void ponmixsound();
  void ActuaOnOffP();
  void apaga();
  void PCVari(int boton,int vari);
  void ActuaDsel();
  void ActuVolp();
  void ActuVols();
  Fl_Double_Window* CreaCMixer();
  Fl_Double_Window *CMixer;
private:
  void cb_CMixer_i(Fl_Double_Window*, void*);
  static void cb_CMixer(Fl_Double_Window*, void*);
  void cb_Ok1_i(Fl_Button*, void*);
  static void cb_Ok1(Fl_Button*, void*);
public:
  Fl_Button *CCCancel;
private:
  void cb_CCCancel_i(Fl_Button*, void*);
  static void cb_CCCancel(Fl_Button*, void*);
  void cb_Select_i(Fl_Button*, void*);
  static void cb_Select(Fl_Button*, void*);
public:
  void SetSound(int num);
  void coord();
  void SaveStylesFunction();
  void GuardaPref();
  void Leer_Registrations();
  void SetRegistration(int num);
  void ActuaVarios();
  void PonLaReg();
  void semabplay();
  void sema();
  void MoreSolo();
  void ActuaMidDevices();
  void labelwin(int i);
  void AcutaLeds(int ifun);
  void FunciLeds(int ifun);
  void ActuaBanco(int can);
};
#endif
