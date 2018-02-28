#ifndef STDAUDIOENCODER_H
#define STDAUDIOENCODER_H

#include <cstring>
#include "vlccontrolinterface.h"

// The Decoding Classes
#include "formats/mp3decoder.h"
#include "formats/oggdecoder.h"
#include "formats/vocdecoder.h"

/*
 * The Adapter Class is responsible to use the required decoder
 * based on the file type (Who knows both Decoding Features & Player Specific Features)
*/
class AudioDecodingAdapterForVlc: \
        public Mp3DecoderToRawAudio,\
        public OggDecoderToRawAudio, \
        public VOCDecoderToRawAudio,
        public VlcControlInterface
{
public:
    bool decode(const std::string &fileName)
    {
        const char* fileType = &fileName[fileName.size() - 3];
        std::cout<<"FileName: "<<fileName<<std::endl;
        std::cout<<"File Type: "<<fileType<<std::endl;
        if(strcmp(fileType,"mp3")==0)
        {
            const char *data=decodeMp3File(fileName.c_str());
            playRawData(data);
        }
        else if(strcmp(fileType,"ogg")==0)
        {
            const char *data=decodeOggFile(fileName.c_str());
            playRawData(data);
        }
        else if(strcmp(fileType,"voc")==0)
        {
            const char *data=decodeVocFile(fileName.c_str());
            playRawData(data);
        }
        else
        {
            return false;
        }

        return true;
    }

};

#endif // STDAUDIOENCODER_H
