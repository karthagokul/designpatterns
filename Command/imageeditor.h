#ifndef IMAGEEDITOR_H
#define IMAGEEDITOR_H

#include "image.h"
#include "commandmanager.h"
#include <iostream>

class ImageEditor
{
public:
    ImageEditor();
    void start();
    void setImage(Image aImage);
private:
    void undoLastCommandIfAvailable();
private:
    Image mCurrentImage;
    CommandManager mCman;
};

#endif // IMAGEEDITOR_H
