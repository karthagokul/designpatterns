#include <iostream>
#include <vector>

using namespace std;

class Peripheral
{
    public:
    virtual void onBoot()=0;
};

class USBDevice: public Peripheral
{
    protected:
    void onBoot() final
    {
        cout<<"Booting USB Device"<<endl;
    }
};

class SerialDevice:public Peripheral
{
    protected:
    void onBoot() final
    {
        cout<<"Booting Serial Device"<<endl;
    }
};

class CPU
{
    std::vector <Peripheral* > mObservers;
public:

    void addPeripheral(Peripheral *p)
    {
        mObservers.push_back(p);
    }

    void boot()
    {
        for(auto *obs:mObservers)obs->onBoot();
    }

};

int main()
{
    Peripheral *audioUSB=new USBDevice();
    Peripheral *monitor=new SerialDevice();
    CPU myCpu;
    myCpu.addPeripheral(audioUSB);
    myCpu.addPeripheral(monitor);
    myCpu.boot();

    return 0;
}
