#include "animal.h"
#include "dog.h"

int main()
{
    // Luodaan Animal-olio
    Animal elain;
    elain.callOut();

    // Luodaan Dog-olio
    Dog koira;
    koira.callOut();

    // Kutsutaan Dog-luokan funktiota Animal-osoittimen kautta
    Animal* osoitin = &koira;
    osoitin->callOut();

    return 0;
}
