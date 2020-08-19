/*
  Plastic Logic EPD project on MSP430

  Copyright (C) 2013 Plastic Logic Limited

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*
 * msp430-spi.h -- MSP430 SPI interface driver
 *
 *
 */

#ifndef MSP430_ZIGBEESPI_H_
#define MSP430_ZIGBEESPI_H_

#include <stddef.h>
#include <stdint.h>
#include <pl/interface.h>

struct pl_gpio;

// function prototypes
extern int msp430_zigbee_spi_init(struct pl_gpio *gpio, uint8_t spi_channel, uint16_t divisor);
extern int msp430_zigbee_spi_write_bytes(uint8_t *buff, uint8_t size);
extern int msp430_zigbee_spi_read_bytes(uint8_t *buff, uint8_t size);
extern void msp430_zigbee_spi_close(void);

#endif /* MSP430_SPI_H_ */
