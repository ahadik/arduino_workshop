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
  for (i=0; i<500; i++){
    for (j=0; j<500; j++){
      //Convert our decimal constants to ints by casting with (int)
      int val1 = i+(int)(0.30*100);
      int val2 = i+(int)(0.42*100);
      int_result = int_sensor_difference(val1, val2);
      asm("");
    }
    asm("");
  }
  
  time = micros()-time;
  Serial.println("Integer time:");
  Serial.println(time);
  
  time = micros();
  
  for (i=0; i<500; i++){
    for (j=0; j<500; j++){
      float val1 = i+0.30;
      float val2 = j+0.42;
      float_result = float_sensor_difference(val1, val2);
      asm("");
    }
    asm("");
  }
  
  time = micros()-time;
  Serial.println("Float time:");
  Serial.println(time);
  
}

void loop(){
}
