#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Luodaan Chef-olio
    {
        Chef kokki("Gordon Ramsay");

        // Valmistetaan salaattia ja keittoa
        kokki.makeSalad();
        kokki.makeSoup();
    }

    // Luodaan ItalianChef-olio
    {
        ItalianChef italialainenKokki("Anthony Bourdain");

        // Kutsutaan perittyja jasenfunktioita
        italialainenKokki.makeSalad();
        italialainenKokki.makeSoup();

        // Valmistetaan pastaa
        italialainenKokki.makePasta();

        // Tulostetaan italialaisen kokin nimi
        cout << "name of the Italian Chef is "
             << italialainenKokki.getName() << endl;
    }

    return 0;
}
