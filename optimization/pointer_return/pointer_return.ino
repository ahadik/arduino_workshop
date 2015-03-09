void ordr(int num1, int num2, int *result, int size){

  if (num1 > num2){
    result[0] = num1;
    result[1] = num2;
  }else{
    result[0] = num2;
    result[1] = num1;
  }
}

void setup(){
  Serial.begin(9600);
  int ordered[2];
  ordr(3,4, ordered, 2);
  Serial.println(ordered[0]);
  Serial.println(ordered[1]);
}

void loop(){
}
