#include <iostream>
#include "vlcplayer.h"

/*
 * Problem Statement
 * Context
 * ------------
 *       Recently you have invented a Audio Fileformat named .mp3 and you have the data encoding algorithm. You are planning to
 * integrate .mp3 file format with popular audio players like VLC
 * Problem Statement
 * ------------------
 *        1. Your encoding library can be added as a Plugin to all these players.
 *        2. The VLC Audio player provide a interface named encode() to encode the data and returns the raw audio data
 *        3. VLC player should not be worried about .aud at this stage , but this is going to be an experimental change
 *
 **/


int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    VLCPlayer p;
    const char *mp3fileName="mymusic.mp3";
    p.play(mp3fileName);

    const char *oggfileName="mymusic.ogg";
    p.play(oggfileName);

    const char *anotherfileName="mymusic.voc";
    p.play(anotherfileName);

    return 0;
}
