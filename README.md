# Smart_Gardening_System
An ESP32 and Blynk app-based system, that monitors garden conditions and notifies users to activate the water pump when soil moisture level is low. This system not only promotes efficient water use and plant health but also empowers users with real-time data, enabling them to make informed decisions about their garden’s needs. By automating the monitoring process, it saves time and reduces the risk of overwatering or underwatering, leading to healthier plants and a more sustainable gardening practice.


# Hardware
 1. ESP32
 2. Soil Moisture Sensor
 3. DHT11/22 (Optional)
 4. LED (Optional)
 5. Water Pump (Optional if you have you can use)

# Connection with ESP
 1. Connect soil moisture sensor with ESP32
 2. Connect LED with ESP32
    -- If you dont have water pump you can use led only and assume it as an motor as the functions of both the components will be same.
3. Connect DHT11 or DHT22 if you have to monitor temperature and humidity of garden or our nearby plant ecosystem.

# To run the project 
1. Clone the Repository
2. Connect all the hardwares
4. Creat a Blynk account
   -- Create a template in the account
   -- Create a websit dashboard or android application dashboard to view all the details
5. Open the .ino file in arduino ide
6. Replace the required field with your own blynk template details and wifi details.
7. Upload the code to ESP32

# NOTE
In this project we are not using DHT sensor or any enviornment monitoring sensor but you can connect and monitor the enviornment parameter through blynk app and can modify the thredhold vlaue in the code as per your plant.
-- Futre Upgradation -- 
We can use DHT sensor to monitor the ecosystem around the plant.
We can implement ML to automate the process and to predict weather enviornment for our garden or plant.


# Images
![image](https://github.com/mayankyadav06/Smart_Gardening_System/assets/140626220/91228773-62a1-48c6-8e52-6c0bb823623b)
![Web Dashboard](https://github.com/mayankyadav06/Smart_Gardening_System/assets/140626220/089e5ab3-cbc3-40f1-97d9-87f0148685ff)
![Mobile Darshboard](https://github.com/mayankyadav06/Smart_Gardening_System/assets/140626220/0876dd16-09e9-4403-8c6f-f1a80d483b43)


