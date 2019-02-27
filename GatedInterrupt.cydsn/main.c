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

CY_ISR(int_P2_isr) {
    Pin_2_5_Write(0);
    CyDelay(300);
    Pin_2_5_Write(1);    
    Pin_2_3_ClearInterrupt();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    SmartIO_P2_Start();
    int_P2_StartEx(int_P2_isr);

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
