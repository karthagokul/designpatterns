#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>

class Image
{
public:
    Image()
    {
        mImageData="";
        mWidth=-1;
        mHeight=-1;
    }

    std::string mImageData;
    int mWidth;
    int mHeight;
};

#endif // IMAGE_H
