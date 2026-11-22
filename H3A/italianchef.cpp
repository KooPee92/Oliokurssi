#include "italianchef.h"
#include <iostream>

using namespace std;

    // Konstruktori kutsuu ensin Chef-luokan konstruktoria
    ItalianChef::ItalianChef(string name) : Chef(name)
    {
        cout << "ItalianChef " << name << " konstruktori" << endl;
    }

    // Destruktori suoritetaan olion tuhoutuessa
    ItalianChef::~ItalianChef()
    {
        cout << "ItalianChef " << name << " destruktori" << endl;
    }

    // Palauttaa kokin nimen
    string ItalianChef::getName()
    {
        return name;
    }

    // Italialainen kokki valmistaa pastaa
    void ItalianChef::makePasta()
    {
        cout << "ItalianChef " << name << " makes pasta" << endl;
    }