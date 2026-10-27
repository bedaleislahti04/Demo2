# Arduino Relätest

Ett enkelt Arduino-projekt som demonstrerar hur man styr ett relä med en digital utgång. Reläet slås på och av automatiskt varje sekund.

## Funktion

Programmet:

- Aktiverar reläet i 1 sekund.
- Stänger av reläet i 1 sekund.
- Upprepar cykeln kontinuerligt.

Detta kan användas för att testa ett relä eller styra en extern belastning, till exempel en LED-lampa.

## Kopplingsschema

| Komponent | Arduino |
|-----------|----------|
| Relä IN   | Pin 4    |
| Relä VCC  | 5V       |
| Relä GND  | GND      |

## Kod

```cpp
// Styrpinne för reläet (den gula kabeln är ansluten till pin 4)
const int relayPin = 4;

void setup() {
  // Ställ in reläpinnen som en utgång
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Slå på reläet
  digitalWrite(relayPin, HIGH);
  delay(1000);

  // Slå av reläet
  digitalWrite(relayPin, LOW);
  delay(1000);
}
```

## Hur det fungerar

När Arduino startar konfigureras pin 4 som utgång. I huvudloopen aktiveras reläet genom att sätta utgången till `HIGH`. Efter 1 sekund stängs reläet av genom att sätta utgången till `LOW`. Processen upprepas oändligt.

## Hårdvara

- Arduino Uno (eller kompatibel)
- Relämodul 5V
- LED eller annan belastning
- Anslutningskablar

## Licens

Detta projekt är fritt att använda och modifiera för utbildning och egna projekt.
