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
  for(val = 0; val<600; val++){
      // write the value to the appropriate byte of the EEPROM.
      // these values will remain there when the board is
      // turned off.
      EEPROM.write(val, val);
      
      if (val == 512)
        Serial.println("Maximum bytes reached");
        break;
    }
  }

void loop()
{
   
}
