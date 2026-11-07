#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;


void calcSum(int a, int b);
void calcDiv(int a, int b);
float retDiv(int a, int b);

int retSum(int a, int b);

int main()

{
    int a;
    int b;

    do
    {

        cout << "Anna ensimmainen kokonaisluku: ";
        cin >> a;

        cout << "Anna toinen kokonaisluku: ";
        cin >> b;

        calcSum(a, b);
        calcDiv(a, b);

        int summa = retSum(a, b);
        cout << "Palautettu summa on: " << summa << endl;

        // Lasketaan osamaara ja kasitellaan mahdollinen virhe
        try
        {
            float osamaara = retDiv(a, b);

            cout << "Palautettu osamaara on: "
             << fixed << setprecision(2)
             << osamaara << endl;
        }
        catch (runtime_error &e)
        {
            cout << "Virhe: " << e.what() << endl;
        }

    } while (b == 0);


    return 0;
}

// Laskee ja tulostaa kahden kokonaisluvun summan
void calcSum(int a, int b)
{
    cout << "Lukujen summa on: " << a + b << endl;
}

// Laskee ja tulostaa kahden kokonaisluvun osamaaran
void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Virhe: Nollalla ei voi jakaa!" << endl;
    }
    else
    {
        cout << "Lukujen osamaara on: "
             << fixed << setprecision(2)
             << static_cast<double>(a) / b << endl;
    }
}

// Laskee ja palauttaa kahden kokonaisluvun summan
int retSum(int a, int b)
{
    return a + b;
}

// Laskee ja palauttaa kahden kokonaisluvun osamaaran
float retDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }

    return static_cast<float>(a) / b;
}