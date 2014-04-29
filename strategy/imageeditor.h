#ifndef IMAGEEDITOR_H
#define IMAGEEDITOR_H

class Filter;
class ImageEditor
{
public:
    ImageEditor();
    void setFilter(Filter *f);

private:
    Filter *mFilter;
};

#endif // IMAGEEDITOR_H
