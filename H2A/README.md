# H2A - Luokat ja oliot

Olio-ohjelmoinnin viikon 2 harjoituksessa harjoiteltiin C++-luokkien ja olioiden luomista sekä niiden käyttöä.

Harjoituksessa toteutettiin kolme luokkaa: Car, Rectangle ja Student.

## Car-luokka

Car-luokka sisältää auton merkin, mallin ja valmistusvuoden.

### Jäsenfunktiot

- `setBrand()` - Asettaa auton merkin.
- `setModel()` - Asettaa auton mallin.
- `setYearModel()` - Asettaa valmistusvuoden.
- `printData()` - Tulostaa auton tiedot.

Car-olio luodaan automaattisena paikallisena oliona.

## Rectangle-luokka

Rectangle-luokka laskee suorakulmion pinta-alan ja ympärysmitan.

### Jäsenfunktiot

- `setWidth()` - Asettaa leveyden.
- `setHeight()` - Asettaa korkeuden.
- `getArea()` - Laskee ja palauttaa pinta-alan.
- `getCircum()` - Laskee ja palauttaa ympärysmitan.

Rectangle-olio luodaan kekomuistiin `new`-operaattorilla ja poistetaan lopuksi `delete`-operaattorilla.

## Student-luokka

Student-luokka sisältää opiskelijan nimen, opiskelijanumeron ja keskiarvon.

### Jäsenfunktiot

- `setName()` - Asettaa opiskelijan nimen.
- `getName()` - Palauttaa opiskelijan nimen.
- `setStudentNumber()` - Asettaa opiskelijanumeron.
- `getStudentNumber()` - Palauttaa opiskelijanumeron.
- `setAverage()` - Asettaa keskiarvon.
- `getAverage()` - Palauttaa keskiarvon.

Getter- ja Setter-funktiot luotiin Qt Creatorin Refactor-toiminnolla.

Student-olio luodaan `unique_ptr`-älyosoittimella käyttäen `make_unique`-funktiota.

Älyosoitin huolehtii muistin vapauttamisesta automaattisesti.

## Yhteenveto

Harjoituksessa opittiin käyttämään luokkia, jäsenmuuttujia ja jäsenfunktioita sekä luomaan olioita kolmella eri tavalla:

- **Car:** Automaattinen paikallinen olio.
- **Rectangle:** Kekomuistiin luotu olio (`new` ja `delete`).
- **Student:** Älyosoittimella hallittu olio (`unique_ptr`).

Ohjelma toteutettiin C++-kielellä Qt Creatorissa.

Kaikkien kolmen luokan toiminta testattiin onnistuneesti.