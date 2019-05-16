# Design352
Smart I/O investigation at read/write by CPU for CQ article. - "CY8C4045AZI-S413" on "CY8CKIT-145-40xx"

## AndLogic

This project is an example project connecting two input pins and one output pin with an OR gate.
Because the input and output pins are handled as negative logic pins, the OR gate will work as an AND logic.

Two tactile switches are connected to the two input pins P2[0] and P2[1], and an LED is connected to the output pin P2[3].
On the CY8CKIT-145-40xx evaluation kit, a pair of a LED with a current limitting resisance is attached to each pins.
No pull-up resistances are required to the input pins because these LED and resistance are also acting as pull-up devices.


## Distrubutor

This project is an example project connecting one input pin P2[4] and four output pins P2[3:0]
The Smart I/O block simply copies the input signal to all output signals.
So, LED attached to the output pins are controlled by a tactile switch attached to the input pin.


## IntermittentBlink

This project is an example project to control a PWM component with another PWM component.
An LED is driven by a PWM component PWM_LED with 4Hz 50% duty pulses.
An another PWM component PWM_BLINK controls the PWM_LED with 3sec period 50% duty pulses.
As the result, the LED acts as intermittent blink behavior.

