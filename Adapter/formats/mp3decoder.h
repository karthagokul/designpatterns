#ifndef MP3ENCODER_H
#define MP3ENCODER_H


/*
 * mp3 file Decoding Algorithm
 *
 *  This class is responsible to decode MP3 Audio Data
 * to Raw Audio Data
*/

class Mp3DecoderToRawAudio{
public:
    const char* decodeMp3File(const char *filename)
    {
        (void)filename;
        const char *encodeddata="Encoded Raw Audio From MP3 File Format";
        return encodeddata;
    }
};

#endif // MP3ENCODER_H
