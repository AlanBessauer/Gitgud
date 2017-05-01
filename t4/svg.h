#include <iostream>

class Point {
private:
  double x;
  double y;
public:
   Point() {
      x = y = 0.0;
   }
   Point(double dx, double dy){
	x = dx;
	y = dy;		
   }
   double cordenadax(){
	return x;
}
   double cordenaday(){
	return y;
}
};
class Circle {
private:
   double r;
   Point p;
public:
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
 double printx(){
	return p.cordenadax();
}
 double printy(){
	return p.cordenaday();
}
 double printr(){
	return r;
}
};
