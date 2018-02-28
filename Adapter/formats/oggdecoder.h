#ifndef OGGDECODER_H
#define OGGDECODER_H

#include <iostream>

/*
 * Ogg file Decoding Algorithm
 *
 *  This class is responsible to decode Ogg Audio Data
 * to Raw Audio Data
*/

class OggDecoderToRawAudio
{
public:
    const char* decodeOggFile(const char *filename)
    {
        (void)filename;
        const char *encodeddata="Encoded Raw Audio From OGG File Format";
        return encodeddata;
    }
};

#endif // OGGDECODER_H
