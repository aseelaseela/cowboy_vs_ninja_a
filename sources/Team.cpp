#include "Team.hpp"
using namespace std; 
using namespace ariel;

Team :: Team(Character *leader) : leader(leader){}
void add(Character *member){
    return;
}
void Team :: add(Character *member){
    return;
}
void Team :: attack(Team *enemyTeam){
    return;
}
int Team :: stillAlive() const{
    return 0;
}
void Team :: print()const{
    return;
}

Team2 :: Team2(Character *leader) : Team(leader){}
void Team2 :: attack(Team *enemyTeam){
    return;
}
void Team2 :: print()const{
    return;
}

SmartTeam :: SmartTeam(Character *leader) : Team(leader){}
void SmartTeam :: attack(Team *enemyTeam){
    return;
}
void SmartTeam :: print()const{
    return;
}