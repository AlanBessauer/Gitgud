#include <iostream>
#include <cmath>
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
   void move(double dx, double dy){
   x = x + dx;
   y = y + dy;
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

int main() {
   Point p(10,20);
   Point* p1[5];
   for (int i = 0;i < 5;i++){
  	 p1[i] = new Point(i*10, i*10);
} 
   p.distanceTo(p1);	
}
