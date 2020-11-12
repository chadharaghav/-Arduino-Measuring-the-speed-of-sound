int echoPin = 2;
int triggerPin = 3;
float pingTravelTime;
float speedOfSound;
float targetDistance = 10.0; // The distance to the target object in cm

void setup() {
  // put your setup code here, to run once:
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sendPing();
  pingTravelTime = pulseIn(echoPin, HIGH);    // in microseconds
  delay(25);

  speedOfSound = 2*targetDistance / pingTravelTime;   // in cm per microsecond
  speedOfSound = speedOfSound * 10;   // in km per second

  Serial.print("SPEED OF SOUND: ");
  Serial.print(speedOfSound);
  Serial.println(" km/s");  
}

void sendPing() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW); 
}
