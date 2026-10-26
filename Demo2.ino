// Styrpinne för reläet (den gula kabeln är ansluten till pin 4)
const int relayPin = 4; 

void setup() {
  // Ställ in reläpinnen som en utgång
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Slå på reläet -> kretsen sluts och lysdioden tänds
  digitalWrite(relayPin, HIGH); 
  // Vänta i 1 sekunder (lysdioden lyser)
  delay(1000);                  
  
  // Slå av reläet -> kretsen bryts och lysdioden slocknar
  digitalWrite(relayPin, LOW);  
  // Vänta i 1 sekunder (lysdioden är släckt)
  delay(1000);                  
}
