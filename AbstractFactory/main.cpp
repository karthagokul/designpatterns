#include <iostream>
#include <vector>

using namespace std;

class Widget
{
public:
    virtual void paint()=0;
};

class LinuxWidget:public Widget
{
protected:
    void paint() final
    {
        cout<<"Linux Widget: Painting"<<endl;
    }
};

class WindowsWidget: public Widget
{
protected:
    void paint() final
    {
        cout<<"Windows Widget: Painting"<<endl;
    }

};

class Window
{
    vector<Widget*> mWidgets;
public:
    Window(const string &factoryName)
    {
        if(factoryName=="windows")
        {
            cout<<"Creating Widgets for Windows Platform"<<endl;
            mWidgets.push_back(new WindowsWidget);
        }
        else if(factoryName=="linux")
        {
            cout<<"Creating Widgets for Linux Platform"<<endl;
            mWidgets.push_back(new LinuxWidget);
        }
        else
        {
            cout<<"Unknown Platform"<<endl;
        }
    }

    void update()
    {
        for(auto* w:mWidgets) w->paint();
    }
};

int main()
{
    Window wLinux("linux");
    wLinux.update();
    Window wWindows("windows");
    wWindows.update();
    Window wMac("mac");
    wMac.update();
    return 0;
}
