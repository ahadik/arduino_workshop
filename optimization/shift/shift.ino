unsigned long time;


void setup(){
  Serial.begin(9600);
  long val = 1073741824;
  int i;
  int j;
  time = micros();
  for (i=0; i<100; i++){
    val = 1073741824;
    for(j=0; j<31;j ++){
      val = val / 2;
      asm("");
    }
    asm("");
  }
  time = micros()-time;
  Serial.print("Result:");
  Serial.println(val);
  Serial.println("Division Time: ");
  Serial.println(time);
  val = 1073741824;

 time = micros();
  for (i=0; i<100; i++){
    val = 1073741824;
    for(j=0; j<31;j ++){
      val = val >> 1;
      asm("");
    }
      asm("");
  }
  time = micros()-time;
  Serial.print("Result:");
  Serial.println(val);
  Serial.println("Shift Time: ");
  Serial.println(time);
  
}

void loop(){
  
}
