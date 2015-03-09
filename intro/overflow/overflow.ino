void setup(){
  Serial.begin(9600);
  Serial.println();
  Serial.println("Starting Demo...");
  byte num = 1;
  int i;
  for(i=0; i<8; i++){
    num = num*2;
    Serial.println(num);
  }
}

void loop(){}
