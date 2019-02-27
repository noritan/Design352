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

uint32_t wdt_count = 0;

void Wdt_Callback(void) {
    uint32_t state = CyEnterCriticalSection();
    
    Pin_LED_Write(~Pin_LED_Read());
    if (++wdt_count > 3) {
        for (;;) ;
    }
    
    CyExitCriticalSection(state);
}

int main(void)
{
    // Initialize WDT interrupt
    Wdt_int_StartEx(CySysWdtIsr);
    CySysWdtSetInterruptCallback(Wdt_Callback);
    CySysWdtUnmaskInterrupt();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        CySysPmDeepSleep();
        
        // Stall emulation
        while (!Pin_SW_Read()) ;
        
        // Software feeding
        wdt_count = 0;
    }
}

/* [] END OF FILE */
