#include <stdbool.h>
#include <stdint.h>

#include "boards.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"

int main(void)
{
  LEDS_CONFIGURE(1<<BSP_LED_0);

  while (true)
  {
    LEDS_INVERT(1 << LED_1);
    nrf_delay_ms(200);
  }
}
