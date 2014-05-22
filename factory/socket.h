#ifndef SOCKET_H
#define SOCKET_H


class Socket
{
public:
    virtual const char* read()=0;
    virtual bool write(const char *aData)=0;
    virtual bool open()=0;
};

#endif // SOCKET_H
