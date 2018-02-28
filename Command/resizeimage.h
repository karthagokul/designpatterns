#ifndef RESIZEIMAGE_H
#define RESIZEIMAGE_H

#include "command.h"

class ResizeImage:public Command
{
public:
    void execute()
    {
        mImage.mImageData="***Resized Image***";
        mImage.mHeight=mImage.mHeight*2;
        mImage.mWidth=mImage.mWidth*2;
    }
};

#endif // RESIZEIMAGE_H
