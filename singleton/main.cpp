#include "singleton.h"

/*
 Often, a system only needs to create one instance of a class, and that instance will be accessed throughout the program. Examples would include objects needed for logging, communication,
 database access, etc.or simply Ensure a class has only one instance, and provide a global point of access to it.
*/
int main()
{
    //Error because Consturctor is private
    //Singleton *obj=new Singleton();

    Singleton *a=Singleton::instance();
    Singleton *b=Singleton::instance();
    a->function();
    b->function();
    a->function();
    return 0;
}
