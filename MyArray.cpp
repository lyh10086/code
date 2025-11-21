#include "MyArray.h"
#include <iostream>
#include <algorithm>
using namespace std;

MyArray::MyArray() : arr(nullptr), size(0) {
    cout << "默认构造函数调用" << endl;
}

MyArray::MyArray(int n) : size(n) {
    arr = new int[size]();
    cout << "带参构造函数调用" << endl;
}

MyArray::MyArray(const MyArray& other) : size(other.size) {
    arr = new int[size]();
    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
    cout << "拷贝构造函数调用" << endl;
}

MyArray::~MyArray() {
    if (arr != nullptr) {
        delete[] arr;
        arr = nullptr;
        size = 0;
    }
    cout << "析构函数调用" << endl;
}

MyArray MyArray::merge(const MyArray& other) const {
    int newSize = size + other.size;
    MyArray result(newSize);
    for (int i = 0; i < size; i++) {
        result.arr[i] = arr[i];
    }
    for (int i = 0; i < other.size; i++) {
        result.arr[size + i] = other.arr[i];
    }
    return result;
}

MyArray MyArray::add(const MyArray& other) const {
    int maxSize = max(size, other.size);
    MyArray result(maxSize);
    for (int i = 0; i < maxSize; i++) {
        int val1 = (i < size) ? arr[i] : 0;
        int val2 = (i < other.size) ? other.arr[i] : 0;
        result.arr[i] = val1 + val2;
    }
    return result;
}

MyArray MyArray::subtract(const MyArray& other) const {
    int maxSize = max(size, other.size);
    MyArray result(maxSize);
    for (int i = 0; i < maxSize; i++) {
        int val1 = (i < size) ? arr[i] : 0;
        int val2 = (i < other.size) ? other.arr[i] : 0;
        result.arr[i] = val1 - val2;
    }
    return result;
}

MyArray MyArray::multiply(const MyArray& other) const {
    int maxSize = max(size, other.size);
    MyArray result(maxSize);
    for (int i = 0; i < maxSize; i++) {
        int val1 = (i < size) ? arr[i] : 0;
        int val2 = (i < other.size) ? other.arr[i] : 0;
        result.arr[i] = val1 * val2;
    }
    return result;
}

MyArray MyArray::divide(const MyArray& other) const {
    int maxSize = max(size, other.size);
    MyArray result(maxSize);
    for (int i = 0; i < maxSize; i++) {
        int val1 = (i < size) ? arr[i] : 0;
        int val2 = (i < other.size) ? other.arr[i] : 0;
        result.arr[i] = (val2 != 0) ? (val1 / val2) : 0;
    }
    return result;
}

int MyArray::getElement(int index) const {
    if (index >= 0 && index < size) {
        return arr[index];
    }
    cout << "索引越界！" << endl;
    return 0;
}

void MyArray::setElement(int index, int value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
    else {
        cout << "索引越界，设置失败！" << endl;
    }
}

void MyArray::printArray() const {
    if (size == 0) {
        cout << "数组为空" << endl;
        return;
    }
    cout << "数组元素：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}