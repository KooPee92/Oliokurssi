#include "car.h"
#include <iostream>




// Alustaa auton merkin, mallin ja valmistusvuoden
Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

// Tulostaa auton merkin, mallin ja valmistusvuoden
void Car::printData()
{
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
}