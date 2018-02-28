#ifndef CROPIMAGE_H
#define CROPIMAGE_H

#include "command.h"

class CropImage:public Command
{
public:
    void execute()
    {
       mImage.mImageData="***Cropped Image***";
       mImage.mHeight=mImage.mHeight/2;
       mImage.mWidth=mImage.mWidth/2;
    }
};

#endif // CROPIMAGE_H
