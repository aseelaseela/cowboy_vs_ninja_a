#include "Point.hpp"
using namespace ariel;
Point :: Point (double x , double y) :x(x) ,y(y) {}
Point :: Point () : x(0.0) , y(0.0) {}
double Point :: distance (Point &point){ return 0.0; }
Point Point ::moveTowards(const Point &source ,const Point &destination , double dist ) { return source;  }
void Point ::print() const { return; }
double Point :: getX() const { return 0.0; }
double Point:: getY() const { return 0.0; }