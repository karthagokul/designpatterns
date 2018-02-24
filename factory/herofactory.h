#ifndef HEROFACTORY_H
#define HEROFACTORY_H

#include "superheros.h"

/*
 * The hero factory is the Factory class which creates Game Characters, Say based on the current score
 * of the player and add additional boost to the character to engage the player to resume the level.
 * */
class HeroFactory
{
public:
    SuperHero *createHero(const int &myScore)
    {
        SuperHero *myhero;
        if((myScore<20)&&(myScore>10))
        {
            myhero=new SpiderMan();
            myhero->setEnergyLevel(50);
        }
        else if((myScore<40)&&(myScore>20))
        {
            myhero=new BatMan();
            myhero->setEnergyLevel(20);
        }
        else if((myScore<10)&&(myScore>0))
        {
            myhero=new SpiderMan();
            myhero->setEnergyLevel(100);
        }
        else
        {
            myhero=new IronMan();
            myhero->setEnergyLevel(10);
        }
        return myhero;
    }
};

#endif // HEROFACTORY_H

