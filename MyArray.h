#ifndef MYARRAY_H
#define MYARRAY_H

class MyArray {
private:
    int* arr;
    int size;

public:
    MyArray();
    MyArray(int n);
    MyArray(const MyArray& other);

    ~MyArray();

    MyArray merge(const MyArray& other) const;
    MyArray add(const MyArray& other) const;
    MyArray subtract(const MyArray& other) const;
    MyArray multiply(const MyArray& other) const;
    MyArray divide(const MyArray& other) const;

    int getSize() const { return size; }
    int getElement(int index) const;
    void setElement(int index, int value);
    void printArray() const;
};

#endif // MYARRAY_H