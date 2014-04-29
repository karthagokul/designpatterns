#include <iostream>
#include "filter.h"
#include "imageeditor.h"

using namespace std;

class SepaFilter:public Filter
{
public:
    void applyFilter()
    {
        cout<<"Sepia Filter Applied\n";
    }
};

class BWFilter:public Filter
{
public:
    void applyFilter()
    {
        cout<<"BWFilter Applied\n";
    }
};

/*
 * Watch https://www.youtube.com/watch?v=cHg5bWW4nUI  for the explanation
*/
int main()
{
    ImageEditor editor;
    Filter *filter=0;
    cout<<"Enter 1 for Sepia filter or 2 for Black and White Filter\n";
    int option;
    bool validselection=true;
    cin>>option;
    if(option==1)
    {
        filter=new SepaFilter;
    }
    else if(option==2)
    {
        filter=new BWFilter;
    }
    else
    {
        validselection=false;
    }
    cout<<"\n";
    if(validselection)
    {
        editor.setFilter(filter);
        delete filter;
        filter=0;
    }
    return 0;
}

