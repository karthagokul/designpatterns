#include "socketfactory.h"
#ifdef __linux__
#include "linuxsocket.h"
#elif _WIN32
#include "winsocket.h"
#else
    return -1;
#endif


 bool SocketFactory::createsocket(Socket *s)
{
#ifdef __linux__
    s=new LinuxSocket();
#elif _WIN32
    s=new WindowsSocket();
#else
    return false;
#endif
    return true;
}
