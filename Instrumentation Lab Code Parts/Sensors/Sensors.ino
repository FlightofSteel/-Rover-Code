//sensor list:
//Ultrasonic Sensor - Coded and Tested
//Air Pressure Sensor - Not Complete
//RC Car motors (4) - Not Complete

//Ultrasonic Sensor Pins
# include<NewPing.h>
#define trigPin 9
#define echoPin 10
#define MaxDistance 24 //in inches

NewPing sonar(trigPin,echoPin,MaxDistance);

//Air Pressure Sensor Pins
#define airsensorPin A1


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {

  delay(50);                    // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.

  int distance = sonar.ping_in(); // Send ping, get distance in cm and print result (0 = outside set distance range)

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("in");
}
