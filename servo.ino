#include <math.h>;
# define M_PI  3.14159265358979323846 

Servo myservo;  
int angle = 0;
void setup() {
   myservo.attach(D0);   // attach the servo on the D0 pin to the servo object
   myservo.write(1);    // test the servo by moving it to 25°
   pinMode(D7, OUTPUT);
    Serial.begin(9600);
    Serial.println("start");
    Particle.function("tide", visualize);
}



void loop() {
 digitalWrite(D7,HIGH);
 
   Serial.println("test");
   delay(2000);
 
   // myservo.write(10);
   //   delay(1000);
   //  myservo.write(350);
   // delay(1000);
}

int visualize(String height){
  
  float angle = asin(height.toFloat());
  angle = angle*180/M_PI;
  if(angle<0){
      angle = 180+angle;
  }
   Serial.println(angle);
   if(angle<=180&&angle>=0){
       myservo.write(angle);
   }
   return 0;
}