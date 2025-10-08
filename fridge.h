//fridge.h
#ifndef FRIDGE_H
#define FRIDGE_H
#include "elephant.h"

class Fridge {
private:
    int capacity;   // 冰箱容量
    int used;       // 已使用空间
    bool doorOpen;  // 门的状态
public:
    Fridge(int c);
    void openDoor();    // 打开门
    void closeDoor();   // 关上门
    bool putIn(const Elephant& e); // 放大象
};

#endif
