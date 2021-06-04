int x;
int capacitor;


void setup() {
  Serial.begin(9600);
  Serial.setTimeout(1);
  pinMode(3, OUTPUT);
   capacitor = 5;
}

void loop() {
   
  int analoghodnota = analogRead(A0);
  analogWrite(3 , capacitor);
  
 
  Serial.println(analoghodnota);
  
  
  if (Serial.available()>0){
  x = Serial.readString().toInt();
  Serial.println(x);
  capacitor=x;
  }
delay(1000);

}
