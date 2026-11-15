#include "car.h"
#include <iostream>

Car::Car() {}


// Asettaa auton merkin
void Car::setBrand(string brand)
{
    this->brand = brand;
}

// Asettaa auton mallin
void Car::setModel(string model)
{
    this->model = model;
}

// Asettaa auton valmistusvuoden
void Car::setYearModel(int yearModel)
{
    this->yearModel = yearModel;
}

// Tulostaa auton tiedot
void Car::printData()
{
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
}