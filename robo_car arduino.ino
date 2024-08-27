const int Pin1 = 4,Pin2 = 5,Pin3= 6,Pin4=7;
const  int switchPin1 = 4,switchPin2 =1,switchPin3 = 2,switchPin4 =3 ; 
int switchState1 = 0,switchState2 = 0,switchState3 = 0,switchState4 = 0;
void setup() {
  // put your setup code here, to run once:
    pinMode(Pin1,OUTPUT);
    pinMode(Pin2,OUTPUT);
    pinMode(Pin3,OUTPUT);
    pinMode(Pin4,OUTPUT);
    pinMode(switchPin1,INPUT);
    pinMode(switchPin2,INPUT);
    pinMode(switchPin3,INPUT);
    pinMode(switchPin4,INPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
     switchState1 = digitalRead(switchPin1);
     switchState2 = digitalRead(switchPin2);
     switchState3 = digitalRead(switchPin3);
     switchState4 = digitalRead(switchPin4);
     
     if (switchState1 == HIGH)
     {
      Serial.println('Forward');
      digitalWrite(Pin1,HIGH);
      digitalWrite(Pin2,LOW);
      digitalWrite(Pin3,HIGH);
      digitalWrite(Pin4,LOW);
     }
    if(switchState2 == HIGH)
    {
      Serial.println('Revers');
      digitalWrite(Pin1,LOW);
      digitalWrite(Pin2,HIGH);
      digitalWrite(Pin3,LOW);
      digitalWrite(Pin4,HIGH);
    }
    if(switchState3 == HIGH)
    {
      Serial.println('Right');
      digitalWrite(Pin1,LOW);
      digitalWrite(Pin2,HIGH);
      digitalWrite(Pin3,HIGH);
      digitalWrite(Pin4,LOW);
    }
    if(switchState4 == HIGH)
    {
      Serial.println('Left');
      digitalWrite(Pin1,LOW);
      digitalWrite(Pin2,LOW);
      digitalWrite(Pin3,HIGH);
      digitalWrite(Pin4,LOW);
    }
    else
     {
       Serial.println('Stop');
       digitalWrite(Pin1,LOW);
       digitalWrite(Pin2,LOW);
       digitalWrite(Pin3,LOW);
       digitalWrite(Pin4,LOW);
     }
}
