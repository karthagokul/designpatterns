#ifndef SOCKETFACTORY_H
#define SOCKETFACTORY_H

#include "socket.h"

class SocketFactory
{
public:
    static bool createsocket(Socket *s);
};

#endif // SOCKETFACTORY_H
