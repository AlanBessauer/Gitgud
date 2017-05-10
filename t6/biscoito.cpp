#include <iostream>
#include <vector>
#include <iterator>

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
};

class quadrado : public Biscoito {
  private:
    float lado;
  public:
    quadrado(float z){
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
      return 3,14 * (r * r);
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
  if( 5 < b->getarea() < 10){
    setpreco(0,50);
  }
  if( 3 < b->getarea() < 5){
    setpreco(0,35);
  }
  if( 1 < b->getarea() < 3){
    setpreco (0,20);
  }
}

int main(){
  triangular t(10, 20);
  std::cout << "" << t.getarea() << std::endl;
}
