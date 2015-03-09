int *ordr(int num1, int num2){
  int ordered[2];
  if (num1 > num2){
    ordered[0] = num1;
    ordered[1] = num2;
  }else{
    ordered[0] = num2;
    ordered[1] = num1;
  }
  return ordered;
}

void setup(){
  Serial.begin(9600);
  char buffer1[30] = "";
  char buffer2[30] = "";
  
  
  Serial.println("Ordering 3,4");
  int *ordered1 = ordr(3,4);
  sprintf(buffer1, "ordered1 memory address: %p\n", ordered1);
  Serial.print(buffer1);
  
  Serial.println(ordered1[0]);
  Serial.println(ordered1[1]);
  
  Serial.println("Ordering 6,7");
  int *ordered2 = ordr(6,7);
  sprintf(buffer2, "ordered2 memory address: %p\n", ordered2);
  Serial.print(buffer2);
  
  
  Serial.println(ordered1[0]);
  Serial.println(ordered1[1]);

}

void loop(){
}
