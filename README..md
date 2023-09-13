# building a digital system to light up the push button LED 💡

The objective of this project was to design a system that turns on an LED while the button is pressed. The button output signal was used as input to the microcontroller to decide whether or not to light the LED. The focus was not only on the development of the project, but also on the application of the knowledge acquired on the Arduino platform, as well as on C programming, directly manipulating the registers of the microcontroller used (ATMega2560 in practice and ATMega328p in simulations in [Tinkercad](https :/ /www.tinkercad.com/)).

## 📦 Components List

|Name|Quantity|Component                                             |
|----|--------|------------------------------------------------------|
|U1  |1       |Arduino Uno (ATMega328p) or Arduino Mega (ATMega2560) |
|D1  |1       |Red LED                                               |
|S1  |1       |Pushbutton                                            |
|R1  |1       |200 Ω Resistor                                        |
|R2  |1       |10 kΩ Resistor                                        |


## 💡 Schematic View

|                                                    Schematic view of the project (Arduino Uno ATMega328p)                                                 |
|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| [![Schematic view of the project (Arduino Uno ATMega328p)](./assets/imgs/button-led-system-schematic.png)](./assets/docs/button-led-system-schematic.pdf) |

## 💻 Simulation

[Button LED System Simulation](./assets/imgs/button-led-system-simulation.png)

### 📌 Program 1 - Direct Register Manipulation

```c
unsigned int BUTTON_PIN = 3; // define pin for signal button
unsigned int LED_PIN = 4; // define pin for signal LED
unsigned int BUTTON_STATE = 0; // define state of button for control of system (1=on/0=off)

void setup() {
  pinMode(LED_PIN , OUTPUT); // signal LED is output
  pinMode(BUTTON_PIN , INPUT); // signal button is input
}

void loop() {
  BUTTON_STATE = digitalRead(BUTTON_PIN); // Read button state
  if (BUTTON_STATE == HIGH) {
    digitalWrite(LED_PIN , HIGH); // turn on the LED
  } else {
    digitalWrite(LED_PIN, LOW);	// turn of the LED
  }

  delay(100);
}
```

```c
#include <util/delay.h>

int buttonPin = 3;      
int ledPin = 4;         

int main(void) {
     DDRD |= (1 << DDD4);     
    PORTD &= ~(1 << PORTD4); 

    while (1) {
        if (PIND & (1 << PIND3)) {
            PORTD |= (1 << PORTD4); 
        } else {
            PORTD &= ~(1 << PORTD4); 
        }
    }

    return 0;
}

```

### 📌 Program 2 - Using Arduino Commands

...

### 📌 Equivalent Commands

..

### 📌 Runtime

..

### 📄 Report

[ ] - Access the report [here](./assets/docs/project_report.pdf).


### 🫂 Authors

- [Ernane Ferreira](https://github.com/ernanej)
- [Quelita Mirian](https://github.com/quelita2)
- [Thiago Lopes](https://github.com/thiagonasmto)

---

<div align="center">
  DCA0119 - Digital Systems (2023.1) <br/>
  Federal University of Rio Grande do Norte - Department of Computer and Automation Engineering (DCA).
</div>