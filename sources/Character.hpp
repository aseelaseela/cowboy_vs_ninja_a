#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Point.hpp"
#include <string>
using namespace std;
namespace ariel
{
class Character
{
protected:
    Point& location;
    std :: string name;
    bool inTeam;
    int health;
public:
    Character(Point& location , std :: string name , int health );
    Character();
    bool isAlive() const;
    double distance(Character *other) const;
    void hit (int strength);
    string getName() const;
    Point& getLocation() const;
    int getHealth() const;
    void setLocation(Point& location) const;
    void setinTeam(bool inTeam);
    virtual std::string print() const=0;
};
}
#endif