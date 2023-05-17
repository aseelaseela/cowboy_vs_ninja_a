#include "Character.hpp"
using namespace std;
using namespace ariel;
Character :: Character(Point& nlocation , std :: string nname , int nhealth ) : location(nlocation),name(nname),inTeam(false),health(nhealth){}
bool Character ::isAlive() const{
    return false;
}
double Character :: distance(Character *other) const{
    return 0.0;
}
void Character :: hit (int strength){
    return;
}
string Character :: getName() const{
    return " ";
}
Point& Character :: getLocation() const{
    return location;
}
int Character :: getHealth() const{
    return 0;
}
void Character :: setLocation(Point& location) const{
    return;
}
void Character :: setinTeam(bool inTeam){
    return;
}
