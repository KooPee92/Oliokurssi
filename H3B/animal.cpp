#include "animal.h"
#include <iostream>

using namespace std;

    // Animal-luokan konstruktori
    Animal::Animal()
    {
    }

    // Animal-luokan destruktori
    Animal::~Animal()
    {
    }

    // Eläimen äänteleminen
    void Animal::callOut()
    {
        cout << "Elain aantelee." << endl;
    }
