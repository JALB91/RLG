#ifndef CONST_H
#define CONST_H 

enum class Dir { UP, DOWN, LEFT, RIGHT };

#define visibleSize Pos(GameManager::getInstance()->getWidth(), GameManager::getInstance()->getHeight())
#define visibleCenter Pos(visibleSize.x * 0.5, visibleSize.y * 0.5)

#endif /* CONST_H */
