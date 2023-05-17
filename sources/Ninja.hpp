#ifndef NINJA_HPP
#define NINJA_HPP
#include "Character.hpp"
namespace ariel
{
    class Ninja : public Character
    {
    protected:
        int speed;
    public:
        Ninja(std::string name , Point location , int health ,int speed ) ;
        ~Ninja(){};
        void move(Character *enemy);
        void slash(Character *enemy);
        std :: string print() const override;
    };

    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(std::string name , Point location);
        ~YoungNinja(){};
    };

    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(std::string name , Point location);
        ~TrainedNinja(){};
    };

    class OldNinja : public Ninja
    {
    public:
        OldNinja(std::string name , Point location);
        ~OldNinja(){};
    };
    
}
#endif