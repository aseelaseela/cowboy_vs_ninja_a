#ifndef POINT_HPP
#define POINT_HPP
namespace ariel
{
class Point
{
private:

    double x;
    double y;

public:
    Point(double x ,double y);
    Point();
    double distance (Point &point) ;
    void print() ;
    static Point moveTowards(const Point &source ,const Point &destination , double dist );
    void print() const ;
    double getX() const ;
    double getY() const ;

};
}
#endif