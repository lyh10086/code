//elephant.h
#ifndef ELEPHANT_H
#define ELEPHANT_H
#include <string>
using namespace std;

class Elephant {
private:
    string name;
public:
    Elephant(string n);
    string getName() const;
};

#endif

