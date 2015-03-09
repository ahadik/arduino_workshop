unsigned long time;
int int_result;
float float_result;

int int_sensor_difference(int dist1, int dist2){
  return dist2-dist1;
}

float float_sensor_difference(float dist1, float dist2){
  return dist2-dist1;
}

void setup(){
  Serial.begin(9600);
  int i;
  int j;
  time = micros();
  for (i=0; i<1000; i++){
    for (j=0; j<1000; j++){
      int_result = int_sensor_difference(230, 142);
      asm("");
    }
  }
  
  time = micros()-time;
  Serial.println("Integer time:");
  Serial.println(time);
  
  time = micros();
  
  for (i=0; i<1000; i++){
    for (j=0; j<1000; j++){
      float_result = float_sensor_difference(2.30, 1.42);
      asm("");
    }
  }
  
  time = micros()-time;
  Serial.println("Float time:");
  Serial.println(time);
  
}

void loop(){
}
