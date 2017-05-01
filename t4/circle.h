#include <iostream>
#include <cmath>
class Point {
public:  
   double x;
   double y;
   Point() {
      x = y = 0.0;
   }
   Point(double dx, double dy){
	x = dx;
	y = dy;		
   }
   void distanceTo(Point* z[]) {
       double v,n,m;
       for(int i=0; i < 5;i++){
	   v = x-z[i]->x;
	   n = y-z[i]->x;
	   if(v < 0){
		v = -v;
}
	   if(n < 0){
		n = -n;
}
	   m = v*v + n*n;
	   m = std::sqrt(m);
	   std::cout << "distancia do ponto e " << m << std::endl;
}

   }
};
