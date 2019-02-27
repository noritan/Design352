/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

const uint32_t NUMBER_LED = 5;

int main(void)
{
    uint32_t    i = 0;
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    SmartIO_P2_Start();

    for(;;)
    {
        /* Place your application code here. */
        Pin_LED_Write(0x01u << i);;
        if (++i >= NUMBER_LED) {
            i = 0;
        }
        CyDelay(500);
    }
}

/* [] END OF FILE */
