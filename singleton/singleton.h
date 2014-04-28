#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
using namespace std;

class Singleton
{
private:
    Singleton();
    static Singleton *mSelf;
    int mCount;

public:
    static Singleton * instance();
    void function();
};

#endif // SINGLETON_H
