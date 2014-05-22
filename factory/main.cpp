#include "socketfactory.h"
#include "socket.h"

#include <iostream>
using namespace std;

int main()
{
    Socket *s=0;
    if(!SocketFactory::createsocket(s))
    {
        cerr<<"Socket is not available for platform"<<endl;
        return -1;
    }
    s->open();
    s->write("hello");
    const char *data=s->read();
    (void)data;
    return 0;
}

