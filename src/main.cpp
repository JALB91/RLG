#include "jalb.h"
#include "GameScene.h"

USING_NS_JALB;

int main(int argc, char *argv[])
{
    Director::getInstance()->runWithMainNode(GameScene::createScene());
    delete Director::getInstance();
    
    return 0;
}
