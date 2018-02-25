#ifndef VLCENCODINGINTERFACE_H
#define VLCENCODINGINTERFACE_H

/*
 * The VLC player provides a Control Interface
 * to access VLC Specific features.
 *
*/
class VlcControlInterface
{
public:
    virtual bool decode(const std::string &fileName)=0;
    virtual void playRawData(const char *data)
    {
        std::cout<<"Playing : "<<data<<std::endl;
        std::cout<<std::endl;
    }

    virtual ~VlcControlInterface()
    {

    }
};


#endif // VLCENCODINGINTERFACE_H
