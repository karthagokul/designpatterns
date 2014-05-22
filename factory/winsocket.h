#ifndef WINSOCKET_H
#define WINSOCKET_H

#include "socket.h"
#include <iostream>

using namespace std;

class WindowsSocket:public Socket
{
public:
    const char* read()
    {
        cout<<__PRETTY_FUNCTION__<<endl;
        return "";
    }

    bool write(const char *aData)
    {
        (void)aData;
        cout<<__PRETTY_FUNCTION__<<endl;
        return true;
    }

    bool open()
    {
        cout<<__PRETTY_FUNCTION__<<endl;
        return true;
    }
};

#endif // WINSOCKET_H
