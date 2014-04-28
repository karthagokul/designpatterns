#include "singleton.h"

Singleton* Singleton::mSelf=0;

Singleton::Singleton():mCount(0)
{
    cout<<__PRETTY_FUNCTION__;
    cout<<"\nCreating Singleton Object\n";
}

Singleton *Singleton::instance()
{
    if(!mSelf)
    {
        mSelf=new Singleton;
    }
    return mSelf;
}

void Singleton::function()
{
    mCount++;
    cout<<__PRETTY_FUNCTION__;
    cout<<"\nCounter : "<<mCount<<"\n";
}
