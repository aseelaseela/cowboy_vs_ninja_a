#include "doctest.h"
#include "sources/Point.hpp"
#include  "sources/Team.hpp"
#include "sources/Character.hpp"
#include "sources/Cowboy.hpp"
#include "sources/Ninja.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cassert>
#include <stdexcept>
using namespace ariel;
TEST_CASE("TEST CASE : POINT CLASS - constructor,getX,getY ")
{
    Point point1(3,8),point2(0,1),point3(9,4);
    CHECK(point1.getX()==3);
    CHECK(point1.getY()==8);
    CHECK(point2.getX()==0);
    CHECK(point2.getY()==1);
    CHECK(point3.getX()==9);
    CHECK(point3.getY()==4);
}
TEST_CASE("TEST CASE : POINT CLASS - distance ")
{    
    Point point1(3,8),point2(0,1),point3(9,4);
    CHECK_EQ(point1.distance(point2) ,7.6157731058639);
    CHECK_EQ(point1.distance(point3) ,7.211102550928);
    CHECK_EQ(point2.distance(point3) ,9.4868329805051);
}
TEST_CASE("TEST CASE : POINT CLASS - moveTowards ")
{ 
    Point point1(31,8),point2(10,1);
    CHECK_NOTHROW(Point::moveTowards(point1,point2,2));
}
TEST_CASE("TEST CASE : CHARACTER CLASS -constructor")
{
    Cowboy Cowboy1("CowBoy1",Point(0,2));
    OldNinja OldNinja1("OldNinja1",Point(0,4));
    YoungNinja YoungNinja1("YoungNinja1",Point(0,8));
    TrainedNinja TrainedNinja1("TrainedNinja1",Point(0,15));

    CHECK_EQ(Cowboy1.getName(),"Cowboy1");
    CHECK_EQ(Cowboy1.getLocation().getX(),0);
    CHECK_EQ(Cowboy1.getLocation().getY(),2);
    CHECK_EQ(Cowboy1.isAlive(),true);

    CHECK_EQ(OldNinja1.getName(),"OldNinja1");
    CHECK_EQ(OldNinja1.getLocation().getX(),0);
    CHECK_EQ(OldNinja1.getLocation().getY(),4);
    CHECK_EQ(OldNinja1.isAlive(),true);
    CHECK_NOTHROW(OldNinja1.move(&Cowboy1));

    CHECK_EQ(YoungNinja1.getName(),"YoungNinja1");
    CHECK_EQ(YoungNinja1.getLocation().getX(),0);
    CHECK_EQ(YoungNinja1.getLocation().getY(),8);
    CHECK_EQ(YoungNinja1.isAlive(),true);
    CHECK_NOTHROW(YoungNinja1.move(&OldNinja1));

    CHECK_EQ(TrainedNinja1.getName(),"TrainedNinja1");
    CHECK_EQ(TrainedNinja1.getLocation().getX(),0);
    CHECK_EQ(TrainedNinja1.getLocation().getY(),8);
    CHECK_EQ(TrainedNinja1.isAlive(),true);
    CHECK_NOTHROW(TrainedNinja1.move(&OldNinja1));
}
TEST_CASE("TEST CASE : TEAM CLASS ")
{
    Cowboy *Cowboy_leader=new Cowboy("CowBoy_leader",Point(0,2));
    Cowboy *Cowboy2=new Cowboy("CowBoy2",Point(1,2));
    Cowboy *Cowboy3=new Cowboy("CowBoy3",Point(2,2));
    Team team1(Cowboy_leader);
    team1.add(Cowboy2);
    team1.add(Cowboy3);
    CHECK(team1.stillAlive()==3);

    YoungNinja *YoungNinja_leader=new YoungNinja("YoungNinja_leader",Point(0,2));
    YoungNinja *YoungNinja2=new YoungNinja("YoungNinja2",Point(1,2));
    YoungNinja *YoungNinja3=new YoungNinja("YoungNinja3",Point(2,2));
    Team team2(YoungNinja_leader);
    team2.add(YoungNinja2);
    team2.add(YoungNinja3);
    CHECK(team2.stillAlive()==3);

    OldNinja *OldNinja_leader=new OldNinja("OldNinja_leader",Point(0,2));
    OldNinja *OldNinja2=new OldNinja("OldNinja2",Point(1,2));
    OldNinja *OldNinja3=new OldNinja("OldNinja3",Point(2,2));
    Team team3(OldNinja_leader);
    team3.add(OldNinja2);
    team3.add(OldNinja3);
    CHECK(team3.stillAlive()==3);

    TrainedNinja *TrainedNinja_leader=new TrainedNinja("TrainedNinja_leader",Point(0,2));
    TrainedNinja *TrainedNinja2=new TrainedNinja("TrainedNinja2",Point(1,2));
    TrainedNinja *TrainedNinja3=new TrainedNinja("TrainedNinja3",Point(2,2));
    Team team4(TrainedNinja_leader);
    team4.add(TrainedNinja2);
    team4.add(TrainedNinja3);
    CHECK(team2.stillAlive()==3);

    team1.print();
    team2.print();
    team3.print();
    team4.print();
}