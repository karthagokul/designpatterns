#ifndef VOCDECODER_H
#define VOCDECODER_H

class VOCDecoderToRawAudio
{
public:
    const char* decodeVocFile(const char *filename)
    {
        (void)filename;
        const char *encodeddata="Decode Raw Audio From VOC File Format";
        return encodeddata;
    }
};
#endif // VOCDECODER_H
