#include <LiquidCrystal.h>
                            // DHT Temperature & Humidity Sensor
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 2            // Pin which is connected to the DHT sensor.
#define DHTTYPE DHT11       // DHT 11
DHT_Unified dht(DHTPIN, DHTTYPE);
uint32_t delayMS;
LiquidCrystal lcd(12, 11, 5, 4, 3, 6); // initialize the library with the numbers of the interface pins
int LDRpin = A0;                 // select the input pin for ldr
int LDRvalue = 0;                   // variable to store the value coming from the sensor
int moisturePin = A1;
int moistureValue = 0;
int threshold_upper = 400;
int threshold_lower = 250;
void setup() 
{
Serial.begin(9600);
// Initialize device.
dht.begin();
lcd.setCursor(0, 0); // top left
lcd.begin(16, 2);
sensor_t sensor;
dht.temperature().getSensor(&sensor);
dht.humidity().getSensor(&sensor);
// Set delay between sensor readings based on sensor details.
delayMS = sensor.min_delay / 1000;

}
void loop() 
{
// Delay between measurements.
delay(delayMS);
/************ DHT WORKING CODE *******************/
// Get temperature event and print its value.
sensors_event_t event;
dht.temperature().getEvent(&event);
if (isnan(event.temperature)) 
{
Serial.println("Error reading temperature!");
}
else 
{
Serial.print("Temperature: ");
Serial.print(event.temperature);
Serial.println(" *C");
lcd.clear();
lcd.write("Temp: ");
lcd.print(event.temperature);
lcd.write(" *C");
delay(1000);
}

// Get humidity event and print its value.
dht.humidity().getEvent(&event);
if (isnan(event.relative_humidity)) 
{
Serial.println("Error reading humidity!");
}
else 
{
Serial.print("Humidity: ");
Serial.print(event.relative_humidity);
Serial.println("%");
lcd.clear();
lcd.write("Humidity: ");
lcd.print(event.relative_humidity);
lcd.write("%");
delay(1000);
}
/************* DHT CODE ENDS ******************/

/************* LDR WORKING CODE *******************/
LDRvalue = analogRead(LDRpin); float Vout = (LDRvalue * 0.0048828125);
float RLDR = (10000.0 * (5 - Vout))/Vout;
float Lux = (500 / RLDR);
Serial.print("LDR VALUE: ");
Serial.println(LDRvalue); delay(100);
lcd.clear();
lcd.write("Light: ");
lcd.print(Lux);
lcd.write(" lux");
delay(1000);
/******************** END OF LDR ********************/

/************ MOISTURE SENSOR CODE ****************/
moistureValue = analogRead(moisturePin);
Serial.print("MOISTURE VALUE: ");
Serial.println(moistureValue);
delay(100);
lcd.clear();
lcd.write("Moisture: ");
lcd.print(moistureValue);
lcd.write(" V");
delay(1000);
if(moistureValue <= threshold_lower)
{lcd.clear();
lcd.write("Wet! Leave it.");
delay(1000);
    
}
if(moistureValue >= threshold_upper)
{lcd.clear();
lcd.write("Dry! Water it.");
delay(1000);
    
}
}
