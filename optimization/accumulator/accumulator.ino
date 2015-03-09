long long_accumulator(){
  int i;
  long accumulator = 0;
  for(i=0; i<32000; i++){
    accumulator = (long)accumulator + (long)i;
    asm("");
  } 
  return accumulator;
}

int int_accumulator(){
  int i;
  int accumulator = 0;
  for(i=0; i<32000; i++){
    accumulator = accumulator + 1;
    asm("");
  } 
  return accumulator;
}

unsigned long time_start;
unsigned long time_end;

void setup(){
  Serial.begin(9600);
  Serial.println("Int Accumulator: ");
  time_start = micros();
  int int_result = int_accumulator();
  time_end = micros();
  Serial.print("Time Elapsed: ");
  Serial.println(time_end - time_start);
  
  Serial.println("Long Accumulator: ");
  time_start = micros();
  long long_result = long_accumulator();
  time_end = micros();
  Serial.print("Time Elapsed: ");
  Serial.println(time_end - time_start);
}

void loop(){
}
