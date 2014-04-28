#include "class.h"

class ClassPrivateImpl
{
    void implementation()
    {
        cout<<__PRETTY_FUNCTION__;
        cout<<"\nHello from Private Implementation\n";
    }

    friend class Class;
};


Class::Class()
    :mImpl(new ClassPrivateImpl)
{
}

void Class::apifunction()
{
    mImpl->implementation();
}
