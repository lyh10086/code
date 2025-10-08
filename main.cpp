//main.cpp
#include "fridge.h"
#include <iostream>
using namespace std;

int main() {
    Fridge fridge(1);
    Elephant e("大象");
    cout << "=== 开始执行把大象装进冰箱的三步 ===" << endl;
    fridge.openDoor();
    fridge.putIn(e);
    fridge.closeDoor();

    cout << "=== 操作完成 ===" << endl;
    return 0;
}
