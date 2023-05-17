#ifndef COW_BOY_HPP
#define COW_BOY_HPP
#include "Character.hpp"
namespace ariel
{
    class Cowboy : public Character
    {
    private:
        int bullets=0;
    public:
        Cowboy(std::string name , Point location);
        ~Cowboy(){};
        void shoot(Character *enemy);
        bool has_bullets() const;
        void reload();
        std :: string print() const override;
    };
    
}
#endif
