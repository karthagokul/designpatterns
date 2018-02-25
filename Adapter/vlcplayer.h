#ifndef VLCPLAYER_H
#define VLCPLAYER_H

#include "audioadaptervlc.h"

/*Dummy Player class for Demo */
class VLCPlayer
{
public:
    void play(const char *fileName)
    {
        VlcControlInterface *audInterface= new AudioDecodingAdapterForVlc();
        bool status=audInterface->decode(fileName);
        if(!status)
        {
            std::cerr<<"Unable to Play the File, Audio Format Not Supported\n";
        }
        delete audInterface;
    }
};


#endif // VLCPLAYER_H
