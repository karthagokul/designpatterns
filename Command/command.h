#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "image.h"

class Command
{
public:
    Image getImage()
    {
        return mImage;
    }
    void setImage(Image &aImage)
    {
        mImage=aImage;
        mPreviousImage=aImage;
    }
    void undo()
    {
        mImage=mPreviousImage;
    }
    virtual void execute()=0;
private:
    Image mPreviousImage;

//Exposed for the Child Classes
protected:
    Image mImage;
};

#endif // COMMAND_H
