# H2B - Oliot ja vektorit

Olio-ohjelmoinnin viikon 2 harjoitus, jossa harjoiteltiin
C++-olioiden tallentamista ja käsittelyä vektorissa.

Harjoituksessa toteutettiin Car-luokka ja luotiin
kolme auto-oliota vektoriin.

## Car-luokka

Car-luokka sisältää auton merkin, mallin ja valmistusvuoden.

### Jäsenmuuttujat

- `brand` - Auton merkki.
- `model` - Auton malli.
- `yearModel` - Auton valmistusvuosi.

### Jäsenfunktiot

- `Car(string, string, int)` - Konstruktori, joka alustaa auton tiedot.
- `printData()` - Tulostaa auton merkin, mallin ja valmistusvuoden.

Auton tiedot annetaan suoraan konstruktorille olion luomisen yhteydessä.

## Autojen vektori

Pääohjelmassa luodaan `vector<Car>`-vektori nimeltä `carList`.

Vektoriin lisätään kolme autoa `emplace_back()`-funktiolla:

- Toyota Corolla, 2020
- Volvo V70, 2015
- BMW 320, 2018

## Autojen tietojen tulostaminen

Ohjelma tulostaa ensin listan toisen auton tiedot
käyttämällä `carList[1]`-indeksiä.

Tämän jälkeen kaikki autot käydään läpi
`for`-silmukalla ja niiden tiedot tulostetaan
`printData()`-funktiolla.

## Yhteenveto

Harjoituksessa opittiin:

- Parametrillisen konstruktorin käyttäminen.
- Olioiden tallentaminen vektoriin.
- `emplace_back()`-funktion käyttäminen.
- Vektorin alkioiden käsittely indeksillä.
- Olioiden käsittely `for`-silmukalla.

Ohjelma toteutettiin C++-kielellä Qt Creatorissa.

Ohjelman toiminta testattiin onnistuneesti.