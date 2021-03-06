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
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    SmartIO_P2_Start();
    
    for(;;)
    {
        /* Place your application code here. */
        Pin_2_0_Write(0);
        CyDelay(1000);
        Pin_2_0_Write(1);
        CyDelay(1000);
    }
}

/* [] END OF FILE */
