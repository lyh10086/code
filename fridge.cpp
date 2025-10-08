// fridge.cpp
#include "fridge.h"
#include <iostream>
using namespace std;

Fridge::Fridge(int c) : capacity(c), used(0), doorOpen(false) {}

void Fridge::openDoor() {
    if (!doorOpen) {
        doorOpen = true;
        cout << "冰箱门已打开。" << endl;
    }
    else {
        cout << "冰箱门本来就是开的。" << endl;
    }
}

void Fridge::closeDoor() {
    if (doorOpen) {
        doorOpen = false;
        cout << "冰箱门已关闭。" << endl;
    }
    else {
        cout << "冰箱门已经是关着的。" << endl;
    }
}

bool Fridge::putIn(const Elephant& e) {
    if (!doorOpen) {
        cout << "冰箱门没打开，无法放入 " << e.getName() << "！" << endl;
        return false;
    }
    if (used < capacity) {
        used++;
        cout << e.getName() << " 已放入冰箱。剩余容量: "
            << (capacity - used) << endl;
        return true;
    }
    else {
        cout << "冰箱空间不足，无法放入 " << e.getName() << "。" << endl;
        return false;
    }
}

