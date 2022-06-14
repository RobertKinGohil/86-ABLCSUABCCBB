void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Define Baud rate 9600
  pinMode(8, OUTPUT); // Define pin 8 as OUTPUT
  pinMode(9, OUTPUT); // Define pin 9 as OUTPUT
  pinMode(10, OUTPUT); // Define pin 10 as OUTPUT
  pinMode(11, OUTPUT); // Define pin 11 as OUTPUT
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'Z': digitalWrite(8, HIGH);break; // when Z is pressed on the app Turn on Pin 8
        case 'z': digitalWrite(8, LOW);break; // when z is pressed on the app Turn off Pin 8
        case 'Y': digitalWrite(9, HIGH);break; // when Y is pressed on the app Turn on Pin 9
        case 'y': digitalWrite(9, LOW);break; // when y is pressed on the app Turn off Pin 9
        case 'W': digitalWrite(10, HIGH);break; // when W is pressed on the app Turn on Pin 10
        case 'w': digitalWrite(10, LOW);break; // when w is pressed on the app Turn off Pin 10
        case 'V': digitalWrite(11, HIGH);break; // when V is pressed on the app Turn on Pin 11
        case 'v': digitalWrite(11, LOW);break; // when v is pressed on the app Turn off Pin 11
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
