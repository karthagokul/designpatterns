#include <iostream>
#include <mutex>
using namespace std;

class Singleton
{
private:
    static Singleton *mSingleton;
    int mValue=0;
    Singleton() =default;
    mutex mMutex;

public:
    static Singleton* getInstance()
    {
        // lock via mutex for thread safety
        if(mSingleton==nullptr)
            mSingleton=new Singleton();
        //leave the lock
        return mSingleton;
    }
    void increment()
    {
        mValue++;
        cout<<mValue<<endl;
    }
};

Singleton *Singleton::mSingleton=nullptr;

int main()
{
    auto *instanceOne=Singleton::getInstance();
    instanceOne->increment();
    auto *instanceTwo=Singleton::getInstance();
    instanceTwo->increment();
    return 0;
}
