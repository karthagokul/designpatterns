#ifndef BLACKANDWHITE_H
#define BLACKANDWHITE_H

#include "command.h"

class BlackAndWhite:public Command
{
public:
    void execute()
    {
        mImage.mImageData="***B&W Image***";
    }
};

#endif // BLACKANDWHITE_H
