#ifndef SEPIAPLUGIN_H
#define SEPIAPLUGIN_H

#include "command.h"

class SepiaPlugin:public Command
{
public:
    void execute()
    {
        mImage.mImageData="***Sepia Plugin***";
    }
};

#endif // SEPIAPLUGIN_H
