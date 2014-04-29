#include "imageeditor.h"
#include "filter.h"
#include <iostream>

using namespace std;

ImageEditor::ImageEditor()
{
    cout<<"\nCreating Editor";
}

void ImageEditor::setFilter(Filter *f)
{
    f->applyFilter();
}
