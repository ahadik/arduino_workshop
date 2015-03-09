int x;
unsigned long time;
void multiplication(){
  for (int i = 0; i <= 100; i++) {
      for (int j = 0; j <= 100; j++) {
          x = i*j;
          asm("");
      }
  }  
}

void division(){
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      x = i/j;
      asm("");
    }
  }
}


void setup(){
  Serial.begin(9600);
  time = micros();
  multiplication();
  time = micros() - time;
  Serial.println("Multiplication time: ");
  Serial.println(time);
  
  time = micros();
  division();
  time = micros() - time;
  Serial.println("Division time: ");
  Serial.println(time);
}

void loop(){
}
