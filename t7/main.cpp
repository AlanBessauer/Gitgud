#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <iostream>
#include "lindow.h"

class Participantes{
 private:
	bool vencedor { false };
 public:
 	Participantes(){
	}
	void vencer(){
	  vencedor = true;
}
};

class ReadValueView : public UserInterface {

public:
  int partic;

  ReadValueView() {
    readButton->callback((Fl_Callback*) cbBtnRead, (void*)(this));	
  }
  
  void show() {
    // Mostra janela
    w->show();
  }
  
  // Funcao chamada quando pressionado botao Read
  static void cbBtnRead(Fl_Widget* btn, void* userdata) {
    ReadValueView* gui = static_cast<ReadValueView*>(userdata);
  }
  void wew(ReadValueView* x){
        std::cout << x->inputValue->value() << std::endl;
	
}

};

int main() {
  ReadValueView gui;                   
  gui.show();	
  return Fl::run();
}
