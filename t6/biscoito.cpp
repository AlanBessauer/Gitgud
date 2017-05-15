#include <iostream>
#include <vector>
#include <iterator>
#include <stdlib.h>

class Biscoito{
private:
  float preco;
public:
  float getpreco(){
    return preco;
  }
  float setpreco(float x){
    preco = x;
  }
  float getarea(){

  }
};

class quadrado : public Biscoito {
  private:
    float lado;
  public:
    quadrado(float x){
        lado = x;
    }
    float getarea(){
      return lado*lado;
    }
};

class circular : public Biscoito {
  private:
    float raio;
  public:
    circular(float r){
        raio = r;

    }
    float getarea(){
      return 3,14 * (raio * raio);
    }
};

class triangular : public Biscoito {
  private:
    float base;
    float altura;
  public:
    triangular(float x,  float y){
        base = x;
        altura = y;
    }
    float getarea(){
      return (base*altura/2);
    }
};

float alocapreco(Biscoito &b){
  if( 5 < b.getarea() < 10){
    b.setpreco(0.50);
  }
  if( 3 < b.getarea() < 5){
    b.setpreco(0.35);
  }
  if( 1 < b.getarea() < 3){
    b.setpreco (0.20);
  }
}

int main(){
  int x, y, z, n;
  float m;
  quadrado q;
  std::cout << "" << t.getarea() << std::endl;
  std::vector<Biscoito*> biscs;
  std::vector<Biscoito*>::iterator i;
  for (i = biscs.begin(); i != 500; i++){
    srand (time(NULL));
      m = rand() % 10;
      n = rand() % 225;
      if(151 <= n <= 225){
        triangular t((m/3), m);
        biscs.push_back(&t);
      }
      if(76 <= n <= 150){
        circular c(m);
        biscs.push_back(&c);
      }
      if(0 <= n <= 75){
        quadrado q(m);
        biscs.push_back(&q);
      }
    }
}
