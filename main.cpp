#include "MyArray.h"
#include <iostream>
using namespace std;

int main() {
    MyArray arr1(3);
    MyArray arr2(arr1);
    MyArray arr3;

    for (int i = 0; i < arr1.getSize(); i++) {
        arr1.setElement(i, i + 1);
    }
    cout << "arr1: ";
    arr1.printArray();

    MyArray arr4(2);
    for (int i = 0; i < arr4.getSize(); i++) {
        arr4.setElement(i, i + 10);
    }
    cout << "arr4: ";
    arr4.printArray();

    MyArray merged = arr1.merge(arr4);
    cout << "合并后的数组（arr1 + arr4）: ";
    merged.printArray();

    MyArray addResult = arr1.add(arr4);
    cout << "加法结果（arr1 + arr4）: ";
    addResult.printArray();

    MyArray subResult = arr1.subtract(arr4);
    cout << "减法结果（arr1 - arr4）: ";
    subResult.printArray();

    MyArray mulResult = arr1.multiply(arr4);
    cout << "乘法结果（arr1 * arr4）: ";
    mulResult.printArray();

    MyArray divResult = arr1.divide(arr4);
    cout << "除法结果（arr1 / arr4）: ";
    divResult.printArray();

    return 0;
}