#ifndef CHEF_H
#define CHEF_H

#include <string>

using namespace std;

class Chef
{
protected:
    string name;

public:
    Chef(string name);
    ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H