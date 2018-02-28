#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H

#include <stack>
#include "command.h"

class BlackAndWhite;
class CropImage;
class ResizeImage;
class SepiaPlugin;

class CommandManager
{
private:
    Image processCommand(Command *command,Image &Image);

public:
    CommandManager();
    Image doCrop(Image &image);
    Image doResize(Image &image);
    Image doApplySepia(Image &image);
    Image doApplyBlackAndWhite(Image &image);

    bool undo(Image &image);

private:
    std::stack<Command *> mCommands;
};

#endif // COMMANDMANAGER_H
