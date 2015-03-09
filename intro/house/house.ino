#include "house.h"

House aHouse = {54, "Arnold", "Providence", "RI"};
House bHouse = {23, "Prospect", "Providence", "RI"};
House cHouse = {48, "Main", "Boston", "MA"};


house aHouse;

void setup(){
  Serial.begin(9600);
  Serial.println(aHouse.street);
  Serial.println(bHouse.street);
  Serial.println(cHouse.street);
}

void loop(){
}
