#include "mbed.h"
#include <memory>

// D3:PB_3, D4:PB_5, D5:PB_4
// D3:red, D5:green, D4:yellow
PortOut RGYLEDs(PortB, 0x0038) ;

int 
main()
{
    while (true)
    {
       for (int color = 0 ; color < 8 ; color++)
       {
           RGYLEDs = color << 3 ;
           ThisThread::sleep_for(500ms) ;
       }
    }
}
