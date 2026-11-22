# H3A - Perintä

Olio-ohjelmoinnin viikon 3 harjoitus, jossa harjoiteltiin
C++-luokkien periytymistä sekä konstruktorien ja destruktorien toimintaa.

Harjoituksessa toteutettiin kaksi luokkaa: Chef ja ItalianChef.

## Chef-luokka

Chef on kantaluokka, joka sisältää kokin nimen sekä
salaatin ja keiton valmistamiseen tarvittavat jäsenfunktiot.

### Jäsenmuuttujat

- `name` - Kokin nimi (string).

Jäsenmuuttuja on määritelty `protected`-osioon,
jotta myös perivä luokka voi käyttää sitä.

### Jäsenfunktiot

- `Chef(string name)` - Konstruktori, joka alustaa kokin nimen.
- `~Chef()` - Destruktori, joka suoritetaan olion tuhoutuessa.
- `makeSalad()` - Tulostaa ilmoituksen salaatin valmistamisesta.
- `makeSoup()` - Tulostaa ilmoituksen keiton valmistamisesta.

Pääohjelmassa luodaan Chef-olio nimeltä Gordon Ramsay,
joka valmistaa salaattia ja keittoa.

## ItalianChef-luokka

ItalianChef perii Chef-kantaluokan käyttäen julkista periytymistä.

### Periytyminen

`class ItalianChef : public Chef`

ItalianChef perii Chef-luokan julkiset jäsenfunktiot
ja pystyy käyttämään niitä suoraan.

### Jäsenfunktiot

- `ItalianChef(string name)` - Konstruktori, joka kutsuu kantaluokan konstruktoria.
- `~ItalianChef()` - Destruktori, joka suoritetaan olion tuhoutuessa.
- `getName()` - Palauttaa kokin nimen.
- `makePasta()` - Tulostaa ilmoituksen pastan valmistamisesta.

Pääohjelmassa luodaan ItalianChef-olio nimeltä Anthony Bourdain.

Italialainen kokki valmistaa salaattia, keittoa ja pastaa.
Lisäksi ohjelma tulostaa kokin nimen getName()-funktiolla.

## Konstruktorit ja destruktorit

Harjoituksessa testattiin konstruktorien ja destruktorien
suoritusjärjestystä periytymisessä.

ItalianChef-olion luonnissa suoritetaan ensin
Chef-kantaluokan konstruktori ja sen jälkeen
ItalianChef-luokan konstruktori.

Olion tuhoutuessa järjestys on päinvastainen.

Ensin suoritetaan ItalianChef-luokan destruktori
ja lopuksi Chef-kantaluokan destruktori.

## Ohjelman testaus

Ohjelman toiminta testattiin Qt Creatorissa.

Ohjelma tulostaa seuraavat tiedot:

```text
Chef Gordon Ramsay konstruktori
Chef Gordon Ramsay makes salad
Chef Gordon Ramsay makes soup
Chef Gordon Ramsay destruktori
Chef Anthony Bourdain konstruktori
ItalianChef Anthony Bourdain konstruktori
Chef Anthony Bourdain makes salad
Chef Anthony Bourdain makes soup
ItalianChef Anthony Bourdain makes pasta
name of the Italian Chef is Anthony Bourdain
ItalianChef Anthony Bourdain destruktori
Chef Anthony Bourdain destruktori