
Algorithm for Greenhouse automation is as follows.
1. Start
2. Initialize ADC.
3. Initialize LCD.
4. Initialize UART
5. Get all set points from EEPROM
6. Get feedback from Temperature sensor
7. If temperature > Set temperature then turn ON the Cooler(FAN)
8. If temperature < Set temperature then turn ON the Heater
9. Get feedback from Humidity sensor
10. If humidity > Set humidity then turn ON the Sprayer
11. If humidity < Set humidity then turn OFF the Sprayer
12. Get feedback from LDR
13. If light intensity < Set light intensity then turn ON the Bulb
14. If light intensity > Set light intensity then turn OFF the Bulb
15. If data received = „T‟ then update set temperature and and go to „6‟
16. If data received = „H‟ then update set humidity and go to „6‟
17. If data received = „L‟ then update set light intensity and go to „6‟
18. Go to „6‟
19. Stop.
