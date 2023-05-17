#include "Ninja.hpp"
using namespace std; 
using namespace ariel;
Ninja :: Ninja(std::string name , Point location , int health ,int speed ) :Character(location,name,health),speed(speed){}\
void Ninja :: move(Character *enemy){
    return;
}
void Ninja :: slash(Character *enemy){
    return;
}
std :: string Ninja :: print() const{
    return "";
}

YoungNinja :: YoungNinja(std::string name , Point location) :Ninja(name,location,100,14){}
TrainedNinja :: TrainedNinja(std::string name , Point location) :Ninja(name,location,120,12){}
OldNinja ::OldNinja(std::string name , Point location) :Ninja(name,location,150,8){}
