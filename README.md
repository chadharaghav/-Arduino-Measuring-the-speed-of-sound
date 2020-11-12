# Measuring-the-speed-of-sound-using-arduino
Measuring the speed of sound using arduino and HC-SR04 ultrasonic distance sensor.

## REQUIREMENTS
1. Arduino
2. HC-SR04 ultrasonic distance sensor
3. jumper wires

## CIRCUIT DIAGRAM
![circuit](https://user-images.githubusercontent.com/58216025/98916060-b60d2d80-24f0-11eb-9442-92d1d2019f59.JPG)

## HOW IT WORKS
A ping is sent from the HC-SR04 ultrasonic distance sensor and Arduino measures the time it takes for the ping to return back after hitting an object placed at a known distance from the sensor.
Speed of sound is then calculated by using the formula, speed = distance travelled by the ping / time taken to travel the distance.
