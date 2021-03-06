#ifndef DELAY_H_
#define DELAY_H_

/*- Header files ------------------------------------------------------------*/
#include <stdint.h>                             /* C Standard integers       */
#include "tm4c1294ncpdt.h"                      /* TivaWare library          */


/*- Prototypes --------------------------------------------------------------*/
void vDelayInit(void);
void vDelay_us(uint16_t uiTenthMillis);
void vDelay_ms(uint16_t uiMilliseconds);

#endif /* DELAY_H_ */
