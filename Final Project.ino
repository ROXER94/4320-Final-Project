//Continuous
Servo myservo1;
Servo myservo2;
Servo myservo3;

//Non-Continuous
Servo myservo4;
Servo myservo5;
Servo myservo6;

//Continuous
const int servo_pin1 = D0;
const int servo_pin2 = D1;
const int servo_pin3 = D2;

//Non-Continuous
const int servo_pin4 = D3;
const int servo_pin5 = RX;
const int servo_pin6 = TX;


//White Motor
const int motorPin = A0;
const int fwdPin = A1;
const int backPin = A2;

void setup() {

myservo1.attach(servo_pin1);
myservo2.attach(servo_pin2);
myservo3.attach(servo_pin3);
myservo4.attach(servo_pin4);
myservo5.attach(servo_pin5);
myservo6.attach(servo_pin6);

pinMode(motorPin, OUTPUT);
pinMode(fwdPin, OUTPUT);
pinMode(backPin, OUTPUT);
digitalWrite(motorPin, LOW);
digitalWrite(fwdPin, HIGH);
digitalWrite(backPin, LOW);

myservo4.write(175);
myservo5.write(175);
myservo6.write(175);

Serial.begin(9600);

}

void servo1_on() {
  myservo1.write(180);
}

void servo2_on() {
  myservo2.write(180);
}

void servo3_on() {
  myservo3.attach(servo_pin3);
  myservo3.write(180);
}

void servo4_on() {
  myservo4.write(-175);
}

void servo5_on() {
  myservo5.write(-175);
}

void servo6_on() {
  myservo6.write(-175);
}

void servo1_off() {
  myservo1.write(90);
}

void servo2_off() {
  myservo2.write(90);
}

void servo3_off() {
  myservo3.detach();
  myservo3.write(90);
}

void servo4_off() {
  myservo4.write(175);
}

void servo5_off() {
  myservo5.write(175);
}

void servo6_off() {
  myservo6.write(175);
}

void motor_on() {
    digitalWrite(motorPin, HIGH);
}

void motor_off() {
    digitalWrite(motorPin, LOW);
}

void loop() {
  byte incoming_byte;


  if (Serial.available() > 0 ) {
    incoming_byte  = Serial.read();

    if (incoming_byte == '1') {
      Serial.println("Input received!");
      Serial.println("Source:Container 1");
      Serial.println("Destination:Barrel 1");
      motor_on();
      servo4_on();
      servo1_on();
      delay(5000);
      servo1_off();
      delay(40000);
      servo4_off();


    }
    if (incoming_byte == '2') {
      Serial.println("Input received!");
      Serial.println("Source:Container 1");
      Serial.println("Destination:Barrel 2");
      motor_on();
      servo5_on();
      servo1_on();
      delay(5000);
      servo1_off();
      delay(40000);
      servo5_off();
    }

    if (incoming_byte == '3') {
      Serial.println("Input received!");
      Serial.println("Source:Container 1");
      Serial.println("Destination:Barrel 3");
      motor_on();
      servo6_on();
      servo1_on();
      delay(5000);
      servo1_off();
      delay(20000);
      servo6_off();
    }

    if (incoming_byte == '4') {
      Serial.println("Input received!");
      Serial.println("Source:Container 2");
      Serial.println("Destination:Barrel 1");
      motor_on();
      servo4_on();
      servo2_on();
      delay(5000);
      servo2_off();
      delay(40000);
      servo4_off();
    }

    if (incoming_byte == '5') {
      Serial.println("Input received!");
      Serial.println("Source:Container 2");
      Serial.println("Destination:Barrel 2");
      motor_on();
      servo5_on();
      servo2_on();
      delay(5000);
      servo2_off();
      delay(40000);
      servo5_off();
    }

    if (incoming_byte == '6') {
      Serial.println("Input received!");
      Serial.println("Source:Container 2");
      Serial.println("Destination:Barrel 3");
      motor_on();
      servo6_on();
      servo2_on();
      delay(5000);
      servo2_off();
      delay(40000);
      servo6_off();
    }

    if (incoming_byte == '7') {
      Serial.println("Input received!");
      Serial.println("Source:Container 3");
      Serial.println("Destination:Barrel 1");
      motor_on();
      servo4_on();
      servo3_on();
      delay(5000);
      servo3_off();
      delay(40000);
      servo4_off();
    }

    if (incoming_byte == '8') {
      Serial.println("Input received!");
      Serial.println("Source:Container 3");
      Serial.println("Destination:Barrel 2");
      motor_on();
      servo5_on();
      servo3_on();
      delay(5000);
      servo3_off();
      delay(40000);
      servo5_off();
    }

    if (incoming_byte == '9') {
      Serial.println("Input received!");
      Serial.println("Source:Container 3");
      Serial.println("Destination:Barrel 3");
      motor_on();
      servo6_on();
      servo3_on();
      delay(5000);
      servo3_off();
      delay(40000);
      servo6_off();
    }

    motor_off();
    Serial.println(" ");
  }
}
