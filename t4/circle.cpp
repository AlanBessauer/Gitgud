#include <iostream>
#include "circle.h"

const double PI = 3.14159;

class Circle {
private:
   double r;
public:
   Point p;
   Circle() {
	int z, x, y;
	std::cout << "digite primeira cordenada do centro" << std::endl;
	scanf("%d", &x);
	std::cout << "digite segunda cordenada do centro" << std::endl;
	scanf("%d", &y);
       p = Point(x,y);
	std::cout << "digite raio" << std::endl;
        scanf("%d", &z);
	r = z;
   }
   double posicao() {
       return(p.x + p.y);
   }
   double inferiorx(){
	return (p.x - r);
}
   double inferiory(){
	return (p.y -r);
}
   double superiorx(){
	return (p.x + r);
}
   double superiory(){
	return (p.y + r);
}
   void distanceTo(Circle* z){
	double i, v, m;
	if (posicao() == z->posicao()){
	   	std::cout << "circulo um dentro do outro" << std::endl;	
		return;
}
	if (posicao() < z->posicao()){
	    	i = z->inferiorx() - superiorx();
		if (i <= z->r){
			std::cout << "circulo um dentro do outro" << std::endl;	
			return;
		}
		v = z->inferiory() - superiory();
		if (v <= z->r){
			std::cout << "circulo um dentro do outro" << std::endl;	
			return;
		}
		m = v*v + i*i;
		m = std::sqrt(m);
	   	std::cout << "distancia dos circulos e " << m << std::endl;	
	}
	if (posicao() > z->posicao()){
	    	i = inferiorx() - z->superiorx();
		if (i <= r){
			std::cout << "circulo um dentro do outro" << std::endl;	
			return;
		}
		v = inferiory() - z->superiory();
		if (v <= r){
			std::cout << "circulo um dentro do outro" << std::endl;	
			return;
		}
		m = v*v + i*i;
		m = std::sqrt(m);
	   	std::cout << "distancia dos circulos e " << m << std::endl;	
	}
}
};

int main() {
   Circle c1;
   Circle* c2 = new Circle();
   c1.distanceTo(c2);
   delete c2;
}

