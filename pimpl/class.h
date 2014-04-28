#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;

class ClassPrivateImpl;
class Class
{
public:
    Class();
    void apifunction();

private:
    ClassPrivateImpl *mImpl;
};

#endif // CLASS_H
