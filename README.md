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


## AlternateBlink

This project is an example project to control five LEDs with a pair of complementary PWM output.
Three out of five LEDs are driven by a positive phase PWM signal.
Another two LEDs are driven by a negative phase PWM signal.


## DoubleKey

This project is an example project to control a PWM with two tactile switches.
The PWM is started when both two switches are turned on.


## ReadSmartPort

This project is an example project to read the Smart I/O's data side output with CPU.
The GPIO interface can be used to read the data side output.
It is available to get a logic signal processed by the Smart I/O with CPU.


## GatedInterrupt

This project is an example project to use the Smart I/O's data side output as an interrupt signal.
Three tactile switches are connected to the input pin P2[2:0]
The data3 output has an AND signal of these tactile switches.
The data3 output is used as an interrupt using the GPIO's Interrupt Logic.

