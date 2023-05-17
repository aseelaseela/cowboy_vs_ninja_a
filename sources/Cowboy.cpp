#include "Cowboy.hpp"
using namespace std; 
using namespace ariel;
Cowboy :: Cowboy(std::string name , Point location) :Character(location ,name , 110 ){}
void Cowboy :: shoot(Character *enemy){
    return;
}
bool Cowboy :: has_bullets() const{
    return false;
}
void Cowboy ::  reload(){
    return;
}
std :: string  Cowboy :: print() const {
    return " ";
}