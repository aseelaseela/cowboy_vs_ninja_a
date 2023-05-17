#ifndef TEAM_HPP
#define TEAM_HPP
#include <vector>
#include "Ninja.hpp"
#include "Cowboy.hpp"
namespace ariel
{
    class Team
    {
    protected:
        Character *leader;
        std::vector<Character*>members;
        int size;

    public:
        Team(Character *leader);
         ~Team(){}
        virtual void add(Character *member);
        virtual void attack(Team *enemyTeam);
        int stillAlive() const;
        virtual void print()const;

    };
    
    class Team2 : public Team
    {
    public:
        Team2(Character *leader);
        ~Team2();
        void attack(Team *enemyTeam) override;
        void print()const override;
    };

    class SmartTeam : public Team
    {
    public:
        SmartTeam(Character *leader);
        SmartTeam();
        void attack(Team *enemyTeam) override;
        void print()const override;
    };
}
#endif