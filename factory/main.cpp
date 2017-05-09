#include <iostream>
#include <vector>

using namespace std;


/*Interface class*/
class Widget
{
public:
    virtual void draw()=0;
};

class LinuxButton: public Widget
{
protected:
    virtual void draw() final
    {
        cout<<"Drawing Linux Button"<<endl;
    }
};

class WindowsButton: public Widget
{
protected:
    virtual void draw() final
    {
        cout<<"Drawing Windows Button"<<endl;
    }
};

class GUIFactory
{
private:
    std::vector<Widget*> mWidgets;
    public:
    enum platform {linux,windows,other};
    GUIFactory(const platform &aPlatform)
    {
        Widget *w=nullptr;
        if(aPlatform==linux)
            w=new LinuxButton();
        else if(aPlatform==windows)
            w=new WindowsButton();
        else
            cout<<"Platform Not Supported"<<endl;
        if(w!=nullptr)
            mWidgets.push_back(w);
    }

    virtual void refresh()
    {
        for(auto *w:mWidgets)w->draw();
    }
};

int main()
{
    GUIFactory myFactory1(GUIFactory::linux);
    myFactory1.refresh();
    GUIFactory myFactory2(GUIFactory::windows);
    myFactory2.refresh();
    GUIFactory myFactory3(GUIFactory::other);
    myFactory3.refresh();
    return 0;
}
