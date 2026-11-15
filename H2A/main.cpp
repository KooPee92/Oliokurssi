#include "car.h"
#include <iostream>
#include "rectangle.h"

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

    // Luodaan Rectangle-olio kekomuistiin
    Rectangle* suorakulmio1 = new Rectangle();

    // Asetetaan suorakulmion mitat
    suorakulmio1->setWidth(5.5);
    suorakulmio1->setHeight(4.0);

    // Tulostetaan pinta-ala ja ymparysmitta
    cout << "\nSuorakulmion pinta-ala: "
         << suorakulmio1->getArea() << endl;

    cout << "Suorakulmion ymparysmitta: "
         << suorakulmio1->getCircum() << endl;

    // Vapautetaan kekomuisti
    delete suorakulmio1;

    return 0;
}