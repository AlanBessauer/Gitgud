#include "svg.h"

void join(Circle* v[], int n){
        std::cout << "<html>" << std::endl;
	std::cout << "<body>" << std::endl;
	std::cout << "<svg height=" << "\"1000\" " << "width=" <<  "\"1000\"" << ">" << std::endl;
        for(int i = 0; i < n; i++){
  	std::cout << "<circle cx=" << "\"" << v[i]->printx() << "\" " << "cy=" << "\"" << v[i]->printy() << "\" " << "r=" << "\"" << v[i]->printr() << "\" " << "stroke=" << "\"black\" " <<  "stroke-width=" << "\"3\" " << "fill=" << "\"red\" />" << std::endl;
  	if(i >= 1){
  		std::cout << "<line x1=" << "\"" << v[i-1]->printx() << "\" " << "y1=" << "\"" << v[i-1]->printy() << "\" " << "x2=" << "\"" << v[i]->printx() << "\" " << "y2=" << "\"" << v[i]->printy() << "\" " << "style=" << "\"" << "stroke:rgb(0,255,0); " <<  "stroke-width=" << 3 << "\" " << "/>" << std::endl;
	}
}
std::cout << "</svg>" << std::endl; 
std::cout << "</body>" << std::endl;
std::cout << "</html>" << std::endl;
}
int main(){
   int num;
   Circle* c[9];
   std::cout << "escolha criar ate 10 circulos para serem desenhados e suas posicoes" << std::endl;
   scanf("%d", &num);
   for(int i = 0;i < num;i++){
	c[i] = new Circle();	
}
   join(c, num);
}
