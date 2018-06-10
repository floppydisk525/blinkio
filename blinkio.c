//blinkio.c
//
//Example program for bcm2835 library
//Blinks a pin on and off every 1 sec
//
//After installing bcm2835, you can build this
//with something like:
//gcc -o blinkio blink.c -l bcm2835
//sudo ./blinkio
//
//Author: MJ copied from bcm2835 examples

#include <stdio.h>    //include for all c progs
#include <bcm2835.h>  //include for raspPi gpio
#include <time.h>     //include for timing

// blinks on rpi plug pi pin 11 (gpio 17) FROM BCM EXAMPLE
//#define PIN RPI_GPIO_P1_11
// blinks on rpi plug pi  pin 7 (gpio  4)
#define IN_GPIO4 RPI_V2_GPIO_P1_07
#define OUT_GPIO5 RPI_V2_GPIO_P1_29
#define OUT_GPIO6 RPI_V2_GPIO_P1_31




int main(int argc, char **argv)
{
    // If you call this, it will not actually access the GPIO
    // Use for testing
//    bcm2835_set_debug(1);
    if (!bcm2835_init())
        return 1;

    // Set RPI pin P1-15 to be an input
    bcm2835_gpio_fsel(IN_GPIO4, BCM2835_GPIO_FSEL_INPT);
    //  with a pullup
    // bcm2835_gpio_set_pud(PIN, BCM2835_GPIO_PUD_UP);
	bcm2835_gpio_fsel(OUT_GPIO5, BCM2835_GPIO_FSEL_OUTP);
	bcm2835_gpio_fsel(OUT_GPIO6, BCM2835_GPIO_FSEL_OUTP);

    while (1)
    {
        // Read some data
        uint8_t value = bcm2835_gpio_lev(IN_GPIO4);
        printf("read from gpio 4: %d\n", value);

        // wait a bit
        delay(500);
    }

    bcm2835_close();
    return 0;
}
