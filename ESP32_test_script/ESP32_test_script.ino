#include <TimeLib.h>

void setup() {
  pinMode(22, OUTPUT); // Set GPIO22 as digital output pin
  pinMode(23, OUTPUT); // Set GPIO23 as digital output pin
  setTime(10,31,0,31,10,2022);
  Serial.begin(9600);
   
}

void loop() {
  if( second() % 2 == 1){
    digitalWrite(22, HIGH); // Set GPIO22 active high
    digitalWrite(23, LOW); // Set GPIO23 active low
  } else {
    //delay(1000);  // delay of one second
    digitalWrite(22, LOW); // Set GPIO22 active low
    digitalWrite(23, HIGH); // Set GPIO23 active high
  }
  //delay(1000); // delay of one second

}