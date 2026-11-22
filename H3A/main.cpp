#include <iostream>
#include "chef.h"

using namespace std;

int main()
{
    // Luodaan Chef-olio pinomuistiin
    Chef kokki("Gordon Ramsay");

    // Kokki valmistaa salaattia ja keittoa
    kokki.makeSalad();
    kokki.makeSoup();

    return 0;
}

