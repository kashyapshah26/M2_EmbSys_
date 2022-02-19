GREEN HOUSE MONITORING AND CONTROL

* The objective of this Case Study is to design a simple, easy to install, microcontroller-based circuit to monitor and record the values of temperature, humidity, soil moisture and sunlight of the natural environment that are continuously modified and controlled in order optimize them to achieve maximum plant growth and yield. 


* It communicates with the various sensor modules in real-time in order to control the light, aeration and drainage process efficiently inside a greenhouse by actuating a cooler, fogger, dripper and lights respectively according to the necessary condition of the crops. 

Advantages

* Also, the use of easily available components reduces the manufacturing and maintenance costs. 

* The design is quite flexible as the software can be changed any time.

* It can thus be tailor-made to the specific requirements of the user. 

* This makes the proposed system to be an economical, portable and a low maintenance solution for greenhouse applications, especially in rural areas and for small scale agriculturists.


Parts of the System

* Sensors (Data acquisition system)
    * Temperature sensor 
    * Humidity sensor
    * Light sensor (LDR)
* Analog to Digital Converter (ADC)
* Microcontroller (AT89C51)
* Liquid Crystal Display
* Actuators – Relays (Interface)
* Devices controlled
    * Water Pump (simulated as a bulb)
    * Sprayer (simulated as a bulb)
    * Cooler (simulated as a fan)
    * Artificial Lights (simulated as 2 bulbs)

Humidity & Temperature Sensor 

* humidity & temperature Sensor DHT11 module
    * Different crop species have different optimum growing temperatures and humidity.
    * Typical greenhouse temperatures vary between 10-30°C.
    * humidity varying between 20 and 70 %RH.



Light Sensor (LDR) 

* A simple light intensity sensor can be constructed using light dependent resistance (LDR). * By using light sensor, the illumination of light is detected for optimum or dim or dark or night.


Atmel AT89C51

* The Atmel AT89C51 is an 8051-based Fully Static 24MHz CMOS controller
* with 32 I/O Line
* 2 Timers/Counters
* 6 Interrupts/2 Priority Levels
* Three-Level Program Memory Lock
* 4K Bytes Flash Memory
* 128 Bytes On-chip RAM


Analog to Digital Converter (ADC)

* In physical world parameters such as temperature, pressure, humidity, and velocity are analog signals.
* A physical quantity is converted into electrical signals. 
* We need an analog to digital converter (ADC), which is an electronic circuit that converts continuous signals into discrete form so that the microcontroller can read the data. 
* Analog to digital converters are the most widely used devices for data acquisition.

 
Liquid Crystal Display

* A liquid crystal display (LCD) is a thin, flat display device made up of any number of colour or monochrome pixels arrayed in front of a light source or reflector.
* Each pixel consists of a column of liquid crystal molecules suspended between two transparent electrodes, and two polarizing filters, the axes of polarity of which are perpendicular to each other.



Relays

* A relay is an electrical switch that opens and closes under the control of another electrical circuit. 
* In the original form, the switch is operated by an electromagnet to open or close one or many sets of contacts.
* Because a relay is able to control an output circuit of higher power than the input circuit, it can be considered to be, in a broad sense, a form of an electrical amplifier.



Power Supply Connection

*The power supply section consists of step-down transformers of 230V primary to 9V and 12V secondary voltages for the +5V and +12V power supplies respectively.



High Level Requirements

* Identify measurable variables important to production. 
    * It is very important to correctly identify the parameters that are going to be measured by the controller’s data acquisition interface, and how they are to be measured.

* Investigate the control strategies. 
    * The simplest strategy is to use threshold sensors that directly affect actuation of devices.

* Identify the software and the hardware to be used. 

    * 	Hardware must always follow the selection of software, with the hardware required being supported by the software selected.

##Low Level Requirements

* Which type of strategy to follow
* The project shall give the output very fast
* The control hardware should include factors such as reliability, support, previous experiences with the equipment (successes and failures), and cost
