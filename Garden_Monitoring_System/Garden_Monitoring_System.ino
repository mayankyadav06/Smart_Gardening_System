#define BLYNK_TEMPLATE_ID "Your template id"
#define BLYNK_TEMPLATE_NAME "your template name"
#define BLYNK_AUTH_TOKEN "your blynk authentication token"

#define BLYNK_PRINT Serial

#include <BlynkSimpleEsp32.h>
#include <WiFi.h>

char auth[] = BLYNK_AUTH_TOKEN;
// Your WiFi credentials.
char ssid[] = "XXXX";
char pass[] = "XXXX";

BlynkTimer timer;

#define LED_PIN 33 // assuming the LED is connected to pin 2

void checkSoilMoisture() {
  int rawValue = analogRead(34); // assuming the sensor is connected to pin 34
  int soilMoistureValue = map(rawValue, 0, 4095, 100, 0); // map the value to a 0-100 scale
  Blynk.virtualWrite(V0, soilMoistureValue); // send soil moisture value to Blynk

  // Print the soil moisture value to the Serial Monitor
  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureValue);

  if (soilMoistureValue < 25) { // adjust the threshold value as per your requirements
    // Blynk.notify("The plant needs watering!");
    Blynk.logEvent("plant_alert", "The plant needs watering!"); // send an email alert
  }
}

BLYNK_WRITE(V1) // assuming the Button Widget is writing to Virtual Pin V1
{
  int pinValue = param.asInt(); // get the value from the Button Widget
  digitalWrite(LED_PIN, pinValue); // turn the LED on or off
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT); // set the LED pin as output

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(1000L, checkSoilMoisture);
}

void loop()
{
  Blynk.run();
  timer.run();
}

