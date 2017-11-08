#include <iostream>

/*
 * Problem Statement
 * Context
 * ------------
 *       Recently you have invented a Audio Fileformat named .aud and you have the data encoding algorithm. You are planning to
 * integrate .aud file format with popular audio players like VLC
 * Problem Statement
 * ------------------
 *        1. Your encoding library can be added as a Plugin to all these players.
 *        2. The VLC Audio player provide a interface named encode() to encode the data and returns the raw audio data
 *        3. VLC player should not be worried about .aud at this stage , but this is going to be an experimental change
 *
 **/

/*
 * Aud file Encoding Algorithm
 *
 *  This class is written in such a way that it should support multiple players . Not specific to VLC Player

*/

class AudEncoder{
public:
    char* encodeAudFile(std::string &filename)
    {
        std::cout<<"Encoding "<<filename<<std::endl;
        return 0;
    }
};

/*
 * The VLC player provides a Generic Encoding Interface for Integrating thrid party solutions.
 *
*/
class VlcEncodingInterface
{
public:
    virtual void* encode(char *fileName)=0;
};

/*
 * Main Class which acts as an adapter to connect the AudEncoder and the VLC Encioding Interface
*/
class AudEncodingAdapterForVlc:public AudEncoder,public VlcEncodingInterface
{
public:
    void* encode(char *fileName)
    {
        std::string fName=std::string(fileName);
        void *data=encodeAudFile(fName);
        return data;
    }

};

/*Dummy Player class for Demo */
class VLCPlayer
{
public:
    void play()
    {
        //See here VLC is not using the AudEncoder directly, but it creates an Object of its encoding interface runtime
        VlcEncodingInterface *audInterface= new AudEncodingAdapterForVlc();
        audInterface->encode("mymusic.aud");
        delete audInterface;
    }
};

int main(int argc, char **argv)
{
    VLCPlayer p;
    p.play();
    return 0;
}
