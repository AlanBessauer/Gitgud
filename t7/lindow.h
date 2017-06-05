#ifndef caraii_h
#define caraii_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Text_Display.H>

class UserInterface {
public:
  UserInterface();
  Fl_Double_Window *w;
protected:
  Fl_Button *readButton;
  Fl_Input *inputValue;
};
#endif
