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

int main(void)
{
    uint8_t     ledPattern = 0x03;
    uint32_t    duty = 0;
    uint32_t    step = 3;
    const uint32_t    maxDuty = 64;
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    SmartIO_P2_Start();
    PWM_duty_Start();

    for(;;)
    {
        /* Place your application code here. */
        CyDelay(10);
        if (duty < step) {
            Pin_2_LED_Write(ledPattern);
            ledPattern = (ledPattern << 1) | ((ledPattern >> 4) & 0x01);
            duty = maxDuty;
        } else {
            duty -= step;
        }
        PWM_duty_WriteCompare(duty);
    }
}

/* [] END OF FILE */
