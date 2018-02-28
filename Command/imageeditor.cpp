#include "imageeditor.h"

ImageEditor::ImageEditor()
{
    mCurrentImage.mImageData="Original Image";
    mCurrentImage.mHeight=100;
    mCurrentImage.mWidth=100;
    setImage(mCurrentImage);
}

void ImageEditor::undoLastCommandIfAvailable()
{
    Image undoImage;
    if(!mCman.undo(undoImage))
    {
         std::cout<<"No More Commands to Undo"<<std::endl;
         return;
    }
    setImage(undoImage);
}

void ImageEditor::start()
{
    setImage(mCman.doApplyBlackAndWhite(mCurrentImage));
    setImage(mCman.doApplySepia(mCurrentImage));
    setImage(mCman.doCrop(mCurrentImage));
    setImage(mCman.doResize(mCurrentImage));

    undoLastCommandIfAvailable();
    undoLastCommandIfAvailable();
    undoLastCommandIfAvailable();
    undoLastCommandIfAvailable();
}

void ImageEditor::setImage(Image aImage)
{
    mCurrentImage=aImage;
    std::cout<<"Image Data: "<<aImage.mImageData\
            <<"[ Width:"<<aImage.mWidth<<",Height:"<<aImage.mHeight<<"]"<<std::endl;
}
