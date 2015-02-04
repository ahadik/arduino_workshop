void setup(){
  int  var = 20;   /* actual variable declaration */
  int  *ip;        /* pointer variable declaration */
  ip = &var;  /* store address of var in pointer variable*/
  Serial.begin(9600);  
  char buffer[30];
   sprintf(buffer, "var Pointer Address = %p\n", ip);
   Serial.print(buffer);
   sprintf(buffer, "var Value = %d\n", var);
   Serial.print(buffer);
}

void loop(){}
