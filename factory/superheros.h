#ifndef SUPERHEROS_H
#define SUPERHEROS_H

#include <string>

/* Game Character Base Class */
class SuperHero
{
public:
    SuperHero(std::string aName):mEnergy(0),mCharacterName(aName) {   }

    virtual void doDamage()=0;
    virtual void doAction()=0;
    virtual void setEnergyLevel(int aEnergy)=0;

    void printMyName()
    {
        std::cout<<"Hey, I am "<<mCharacterName<<std::endl;
    }

private:
    int mEnergy;
    std::string mCharacterName;
};

class IronMan:public SuperHero
{
public:
    IronMan():SuperHero("Iron Man"){}
    void doDamage() {}
    void doAction() {}
    virtual void setEnergyLevel(int aEnergy) {(void)aEnergy;}
};

class SpiderMan:public SuperHero
{
public:
    SpiderMan():SuperHero("Spider Man"){}
    void doDamage() {}
    void doAction() {}
    virtual void setEnergyLevel(int aEnergy) {(void)aEnergy;}
};

class BatMan:public SuperHero
{
public:
    BatMan():SuperHero("Bat Man"){}
    void doDamage(){}
    void doAction() {}
    virtual void setEnergyLevel(int aEnergy) {(void)aEnergy;}
};



#endif // SUPERHEROS_H

