#ifndef LINUXSOCKET_H
#define LINUXSOCKET_H

#include "socket.h"
#include <iostream>

using namespace std;

class LinuxSocket:public Socket
{
public:
    const char* read()
    {
        return "";
    }

    bool write(const char *aData)
    {
        (void)aData;
        return true;
    }

    bool open()
    {
        return true;
    }
};

#endif // LINUXSOCKET_H
