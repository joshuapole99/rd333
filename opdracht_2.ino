float pi = 3.14;
float diameter;
float hoogte;

void setup()
  {
  //Start.
  Serial.begin(9600);
  
  //Bericht
  Serial.println("Reken de inhoud van een cilinder uit.");
  Serial.println ("");
  delay(1000);

  //diameter.
  Serial.println("Wat is de waarde voor 'diameter'?");
  while(Serial.available()==0) {
  }
  
  diameter=Serial.parseFloat();
  Serial.flush();
  while(Serial.available())
  Serial.read();
  delay(1000);
  Serial.print("Jouw antwoord voor diameter = ");
  Serial.print(diameter);
  Serial.println (" cm");
  delay(1000);

  //hoogte.
  Serial.println("Wat is de waarde voor 'hoogte'?");
  while(Serial.available()==0) {  
  }
  hoogte=Serial.parseFloat();
  delay(1000);
  Serial.print("Jouw antwoord voor hoogte = ");
  Serial.print(hoogte);
  Serial.println (" cm");
  delay(1000);

  //Berekening
  float volume = pi * (diameter / 2) * (diameter / 2) * hoogte;

  //Bericht berekenen.
  Serial.println ("");
  Serial.println("Berekenen...");
  Serial.println ("");
  delay(2000);

  //Bericht antwoord
  Serial.print ("De inhoud van jouw cilinder =  ");
  Serial.print (volume);
  Serial.println (" cm3");

  //Bericht berekening
  Serial.print("Jouw berekening: pi *(");
  Serial.print(diameter);
  Serial.print(" / 2) * (");
  Serial.print(diameter);
  Serial.print(" / 2) * ");
  Serial.print(hoogte);
  Serial.println(".");
  delay(1000);

  
}

void loop()
{ 
}

