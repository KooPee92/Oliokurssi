#include "chef.h"
#include <iostream>

using namespace std;

    // Konstruktori, joka alustaa kokin nimen
    Chef::Chef(string name)
    {
        this->name = name;
        cout << "Chef " << name << " konstruktori" << endl;
    }

    // Destruktori suoritetaan olion tuhoutuessa
    Chef::~Chef()
    {
        cout << "Chef " << name << " destruktori" << endl;
    }

    // Kokki valmistaa salaattia
    void Chef::makeSalad()
    {
        cout << "Chef " << name << " makes salad" << endl;
    }

    // Kokki valmistaa keittoa
    void Chef::makeSoup()
    {
        cout << "Chef " << name << " makes soup" << endl;
    }

