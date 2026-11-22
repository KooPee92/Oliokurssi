# H3B - Perinta ja metodien ylikirjoittaminen

Olio-ohjelmoinnin viikon 3 harjoitus, jossa harjoiteltiin
C++-luokkien periytymistä, metodien ylikirjoittamista ja polymorfismia.

Harjoituksessa toteutettiin kaksi luokkaa: Animal ja Dog.

## Animal-luokka

Animal on kantaluokka, joka sisältää virtuaalisen callOut()-funktion.

### Jäsenfunktiot

- `Animal()` - Luokan konstruktori.
- `virtual ~Animal()` - Virtuaalinen destruktori.
- `virtual void callOut()` - Tulostaa eläimen ääntelyn.

callOut()-funktio on määritelty virtuaaliseksi,
jotta perivä luokka voi ylikirjoittaa sen.

## Dog-luokka

Dog perii Animal-kantaluokan käyttäen julkista periytymistä.

### Periytyminen

`class Dog : public Animal`

Dog-luokka perii Animal-luokan ominaisuudet ja
ylikirjoittaa sen callOut()-funktion.

### Jäsenfunktiot

- `Dog()` - Luokan konstruktori.
- `~Dog() override` - Luokan destruktori.
- `void callOut() override` - Tulostaa koiran haukkumisen.

Dog-luokan callOut()-funktio tulostaa tekstin "Koira haukkuu!".

## Metodien ylikirjoittaminen

Animal-luokassa callOut()-funktio on määritelty virtual-avainsanalla.

```cpp
virtual void callOut();
```

Dog-luokassa sama funktio ylikirjoitetaan override-avainsanalla.

```cpp
void callOut() override;
```

Näin Dog-luokka voi käyttää omaa toteutustaan
kantaluokan funktion sijaan.

## Polymorfismi

Pääohjelmassa testattiin polymorfismia käyttämällä
Animal-tyyppistä osoitinta, joka osoittaa Dog-olioon.

```cpp
Animal* osoitin = &koira;
osoitin->callOut();
```

Vaikka osoitin on Animal-tyyppinen,
ohjelma suorittaa Dog-luokan callOut()-funktion.

Tämä onnistuu, koska funktio on määritelty virtuaaliseksi.

## Ohjelman testaus

Ohjelma toteutettiin ja testattiin Qt Creatorissa.

Pääohjelmassa luotiin Animal- ja Dog-oliot,
joiden callOut()-funktioita kutsuttiin.

Lisäksi Dog-olion funktiota kutsuttiin Animal-osoittimen kautta.

### Ohjelman tulostus

```text
Elain aantelee.
Koira haukkuu!
Koira haukkuu!
```

Kaikki kolme funktion kutsua toimivat oikein.

## Olioiden tuhoutuminen

Animal- ja Dog-oliot luotiin pääohjelmassa paikallisina olioina.

Oliot tuhoutuvat automaattisesti niiden elinkaaren päättyessä.

Animal-luokan destruktori on määritelty virtuaaliseksi,
jotta myös perivän luokan olio voidaan tuhota oikein
kantaluokan osoittimen kautta.

## Yhteenveto

Harjoituksessa opittiin:

- Kantaluokan ja perivän luokan luominen.
- Julkisen periytymisen käyttäminen.
- Virtuaalisten jäsenfunktioiden käyttäminen.
- Metodien ylikirjoittaminen override-avainsanalla.
- Polymorfismin toiminta kantaluokan osoittimen kautta.
- Virtuaalisen destruktorin merkitys.

Ohjelma toteutettiin C++-kielellä Qt Creatorissa.

Ohjelman toiminta testattiin onnistuneesti.