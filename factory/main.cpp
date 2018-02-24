#include <iostream>
#include "superheros.h"
#include "herofactory.h"


int main()
{
    HeroFactory factory;

    SuperHero *heroLevelOne=factory.createHero(10);
    heroLevelOne->printMyName();

    SuperHero *heroLevelTwo=factory.createHero(30);
    heroLevelTwo->printMyName();

    SuperHero *heroLevelThree=factory.createHero(1);
    heroLevelThree->printMyName();

    return 0;
}
