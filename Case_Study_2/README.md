AUTOMATIC ROOM LIGHT CONTROLLER WITH VISITOR COUNTER

*	Digital visitor counter is a reliable circuit that takes over the task of counting Number of Persons/ Visitors in the Room very accurately. 

*	When somebody enters into the Room then the Counter is Incremented by one and when anyone leaves the room then the Counter is Decremented by One, by doing this simultaneously the automatically room light will be controlled through microcontroller.


*	The total number of Persons inside the Room is displayed on the seven segment displays. 

*	The microcontrollers do the above job it receives the signals from the sensors, and this signal operated under the control of software which is stored in ROM of the Microcontroller.


*	This project is implemented using IR sensor for object detection, PIC micro-controller, Alarm, Driver unit and LCD display with key pad.


APPLICATIONS:

1.	Home appliance
2.	Factory AC controlling
3.	Factory Light controlling
4.	In college labs
5.	In research institutes
 


Components 

*	IR Sensor
*	Micro-Controller
*	LCD
*	Relay
*	Power Supply



Power Supply

*	Here we have used +12V and +5V dc power supply. 

*	The main function of this block is to provide the required amount of voltage to essential circuits +12V is given to relay driver. 

*	To get the +5V dc power supply we have used here IC 7805, which provides the +5V dc regulated power supply.




Enter& Exit Sensor Circuit

*	This is one of the main parts of our project. 

*	The main intention of this block is to sense the person. 

*	For sensing the person, we are using a TSOP1738 sensor. 

*	By using this sensor and its related circuit diagram we can count the number of persons.

 


Atmel AT89C51

*	The Atmel AT89C51 is an 8051-based Fully Static 24MHz CMOS controller
*	 with 32 I/O Line
*	2 Timers/Counters
*	6 Interrupts/2 Priority Levels
*	Three-Level Program Memory Lock
*	4K Bytes Flash Memory
*	128 Bytes On-chip RAM




Seven Segment Display Circuit

*	In this section we have used two seven segment displays to display number of persons in the room. 

*	We have used transistor for display drive circuit.



 Relay Driver Circuit

*	In this section we have used the transistor and the relays. 

*	Output signal from microcontroller is given to the base of the transistor, which energizes the particular relay, because of this, appropriate device is selected and which performs its allotted function




High Level Requirements 

*	The turning of lights ON and OFF should be fast.
*	The project will minimize the user's need in case they forgot to turn OFF the light.
*	It will help to reduce the electricity bill.



Low Level Requirements

*	It should be able to open and close doors in future.
*	The sensor should be able to count 2 persons simultaneously

