
#include <Arduino.h>
// Pin Read + LED On / Off
void setup()
{
DDRC = 0b00000010;
}
void loop()
{
uint8_t readPin = PINC & (0b00000010);
if(readPin == 0x01)
{
PORTC = 1 << PORTC1;
}
else
PORTC = 0 << PORTC1;
}
