/*
  Dance.ino - Make elegoo smart robot car v1.0 dance
  Created by Pablo Gambetta December 2016
  Released into the public domain.
*/
#include <Drivelib.h>

// [esp] Incluir drivelib
// [eng] Include drivelib
Drivelib drivelib;

/**
* [esp] Funcion de configuracion. Corre unicamente una vez. 
* [eng] Setup function. Only run once.
*/
void setup() {
  // [esp] Abrir el puerto serial y establecer la velocidad en baudios a 9600
  // [eng] Open the serial port and set the baud rate to 9600
  Serial.begin(9600);
}

/**
* [esp] Funcion principal. Corre indefinidamente.
* [eng] Main function. Runs repeatedly.
*/
void loop() {

  // [esp] Ir hacia adelante
  
  // [eng] Go foward
  drivelib.forward();
  delay(500);

  // [esp] Parar
  // [eng] Stop
  drivelib.stop();
  delay(2000);

  // [esp] Ir hacia atras
  // [eng] Go back
  drivelib.backward();
  delay(500);

  // [esp] Parar
  // [eng] Stop
  drivelib.stop();
  delay(2000);

  // [esp] Ir hacia la izquierda
  // [eng] Go left
  drivelib.left();
  delay(500);

  // [esp] Parar
  // [eng] Stop
  drivelib.stop();
  delay(2000);

  // [esp] Ir hacia la derecha
  // [eng] Go right
  drivelib.right();
  delay(500);

  // [esp] Parar
  // [eng] Stop
  drivelib.stop();
  delay(2000);

}
