#include <Arduino.h>
#include <Wire.h>

void receiveEvent(int howMany)
{
  Serial.println("Awa");
  while(1 < Wire.available()) // hacemos loop por todos los bytes salvo el último
  {
    char c = Wire.read();    // recibe un byte como carácter
    Serial.print(c);         // imprime el carácter
  }
  int y = Wire.read();       // recibe el último byte como número
  Serial.println(y);         // imprime el número
}
 
void setup()
{
  Wire.begin(1); // Se une al bus i2C con la ID #1
  Wire.onReceive(receiveEvent); // Función a ejecutar al recibir datos
  Serial.begin(9600);
}

// byte y = 0;
 
void loop()
{
  // Wire.beginTransmission(0); // enviar a Slave #0
  // Wire.write("y is ");       // envía cinco bytes
  // Wire.write(y);             // envía un byte  
  // Wire.endTransmission();    // deja de enviar
  // y++;
  // delay(500);
}



