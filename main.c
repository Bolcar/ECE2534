#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
// This code was modified by .......

int main(void) {
    // Stop watchdog timer
    WDT_A_hold(WDT_A_BASE);

    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);

    while (1) {

        GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);

        unsigned int i;
        // Delay through empty loop
        for (i = 500000; i > 0; i--)   ;
    }
}
