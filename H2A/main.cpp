#include "car.h"

using namespace std;

int main()
{
    // Luodaan Car-luokan olio
    Car auto1;

    // Asetetaan auton tiedot
    auto1.setBrand("Toyota");
    auto1.setModel("Corolla");
    auto1.setYearModel(2020);

    // Tulostetaan auton tiedot
    auto1.printData();

    return 0;
}