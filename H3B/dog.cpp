#include "dog.h"
#include <iostream>

using namespace std;

    // Dog-luokan konstruktori
    Dog::Dog()
    {
    }

    // Dog-luokan destruktori
    Dog::~Dog()
    {
    }

    // Ylikirjoitetaan Animal-luokan callOut-funktio
    void Dog::callOut()
    {
        cout << "Koira haukkuu!" << endl;
    }

