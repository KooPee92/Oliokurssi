#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    // Luodaan vektori Car-luokan olioille
    vector<Car> carList;

    // Lisataan kolme autoa vektoriin
    carList.emplace_back("Toyota", "Corolla", 2020);
    carList.emplace_back("Volvo", "V70", 2015);
    carList.emplace_back("BMW", "320", 2018);

    // Tulostetaan listan toisen auton tiedot
    cout << "Listan toinen auto:" << endl;
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot
    cout << "\nKaikki autot:" << endl;

    for (Car &auto1 : carList)
    {
        auto1.printData();
        cout << endl;
    }



    return 0;
}