#include "class.h"

/*
Reference:
http://tonka2013.wordpress.com/2013/08/31/why-every-c-developer-should-know-about-the-pimpl-idiom-pattern/

Advantages:

1.Making the binary interface (ABI) independent of the private members. It is possible to update a shared library without recompiling the dependent code,
but only as long as the binary interface remains the same. Now almost any change in header, except for adding a non-member function and adding a non-virtual
member function, changes the ABI. The PImpl idiom moves definition of the private members into the source and thus decouples the ABI from their definition.

2.When a header changes, all sources including it have to be recompiled. And C++ compilation is rather slow. So by moving definitions of the private members
into the source, the PImpl idiom reduces the compilation time after modifications (ok, this applies to interface+factory function with hidden concrete class too).

3.For many classes in C++ exception safety is an important property. Often you need to compose several classes in one so that if during operation on more than
one member throws, none of the members is modified or you have operation that will leave the member in inconsistent state if it throws and you need the
containing object to remain consistent. In such case you implement the operation by creating new instance of the PImpl and swap them when the operation succeeds.

*/

int main()
{
    Class c;
    c.apifunction();

    return 0;
}

