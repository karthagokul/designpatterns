#include "commandmanager.h"
#include "blackandwhite.h"
#include "sepiaplugin.h"
#include "resizeimage.h"
#include "cropimage.h"

CommandManager::CommandManager()
{
}

Image CommandManager::processCommand(Command *command,Image &image)
{
    command->setImage(image);
    command->execute();
    mCommands.push(command);
    return command->getImage();
}

Image CommandManager::doCrop(Image &image)
{
    Command *command=new CropImage();
    return processCommand(command,image);
}
Image CommandManager::doResize(Image &image)
{
    Command *command=new ResizeImage();
    return processCommand(command,image);
}

Image CommandManager::doApplySepia(Image &image)
{
    Command *command=new SepiaPlugin();
    return processCommand(command,image);
}

Image CommandManager::doApplyBlackAndWhite(Image &image)
{
    Command *command=new BlackAndWhite();
    return processCommand(command,image);
}

bool CommandManager::undo(Image &image)
{
    if(mCommands.empty())
    {
        return false;
    }
    Command *command=mCommands.top();
    command->undo();
    image=command->getImage();
    mCommands.pop();
    return true;
}
