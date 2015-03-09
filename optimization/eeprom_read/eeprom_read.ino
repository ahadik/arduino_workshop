/*
 * EEPROM Write
 *
 * Stores values read from analog input 0 into the EEPROM.
 * These values will stay in the EEPROM when the board is
 * turned off and may be retrieved later by another sketch.
 */

#include <EEPROM.h>

void setup()
{
  Serial.begin(9600);
  // the current address in the EEPROM (i.e. which byte
  // we're going to write to next)
  int val;
  for(val = 0; val<512; val++){
      // write the value to the appropriate byte of the EEPROM.
      // these values will remain there when the board is
      // turned off.
      int read_val = EEPROM.read(val);
      Serial.println(read_val);
  }
}

void loop()
{
   
}
