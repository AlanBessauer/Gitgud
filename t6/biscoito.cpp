#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <stdlib.h>

class Biscoito{
private:
  float tam;
  float preco;
public:
  
  float getpreco(){
    return preco;
  }
  float setpreco(float x){
    preco = x;
  }
  virtual float getarea(){
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
      return 3.14 * (raio * raio);
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

float alocapreco(Biscoito* b){
  if( 10 < b->getarea() && b->getarea() < 30){
    b->setpreco(0.5);
  }
  if( 5 < b->getarea() && b->getarea() < 10){
    b->setpreco(0.35);
  }
  if( 0 < b->getarea() && b->getarea()  < 5){
    b->setpreco (0.2);
  }
}
 bool cmp(Biscoito* j, Biscoito* t) {
		return t->getarea() < j->getarea();
}

int main(){
  int z, v, contm, contl, conts, k;
  float m, n, med, lar, sl, p;
  srand(time(NULL));
  v = 0;
  sl = 0;
  lar = 0;
  med = 0;
  contm = 0;
  contl = 0;
  conts = 0;
  std::cout<<"quantos biscoitos terao?"<<std::endl;
  scanf("%d", &k); 
  std::vector<Biscoito*> biscs;
  for(v = 0; v <= k; v++){
      m = rand() % 10 + 1;
      n = rand() % 225;
	std::cout<< n;
	std::cout<< std::endl;
      if(151 <= n && n <= 225){
	std::cout<<"tri"<<std::endl;
        biscs.push_back(new triangular(m/3, m));
	alocapreco(biscs[v]);
      }
      if(76 <= n && n <= 150){
	std::cout<<"circ"<<std::endl;
        biscs.push_back(new circular(m/4));
	alocapreco(biscs[v]);
      }
      if(0 <= n && n <= 75){
	std::cout<<"quad"<<std::endl;
        biscs.push_back(new quadrado(m/2));
	alocapreco(biscs[v]);
      }
   }
  std::cout<<"biscoito por ordem de tamanho:"<<std::endl;
  std::sort(biscs.begin(), biscs.end(), cmp);
  std::vector<Biscoito*>::iterator ix;
  for (ix = biscs.begin(); ix != biscs.end(); ix++){
	std::cout<<(*ix)->getarea()<<std::endl;
	}

std::vector<Biscoito*>::iterator iz;
for (iz = biscs.begin(); iz != biscs.end(); iz++){
	std::cout<<(*iz)->getpreco()<<std::endl;
	p = (*iz)->getpreco();
	if(p <=0.24 && p>= 0.15){
		sl += 0.2;
		conts++;
	} else if(p <=0.37 && p >=0.26){
		med += 0.35;
		contm++;
	
        } else if(p ==0.5){
		lar += 0.5;
		contl++;
	}
	}
std::cout<<"biscoitos pequenos:"<<conts<<std::endl;
  std::cout<<"biscoitos medios:"<<contm<<std::endl;
  std::cout<<"biscoitos grandes:"<<contl<<std::endl;
  std::cout<<"arrecadado com biscoitos pequenos"<<std::endl;
  std::cout<<"$"<<sl<<std::endl;
  std::cout<<"arrecadado com biscoitos medios"<<std::endl;
  std::cout<<"$"<<med<<std::endl;
  std::cout<<"arrecadado com biscoitos grandes"<<std::endl;
  std::cout<<"$" <<lar<<std::endl;
  std::cout<<"biscoitos por ordem de tamanho"<<std::endl;
}
