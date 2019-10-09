int t = 4;//Triger PIn
int e =3; //Echo Pin
long k;
int d;
void setup(){
pinMode(t, OUTPUT);
pinMode(e, INPUT);
Serial.begin(9600);
}
void loop() {
digitalWrite(t, LOW);
delay(2);
digitalWrite(t, HIGH);
delay(10);
digitalWrite(t, LOW);
k=pulseIn(e, HIGH);
d=k*0.034/2;
Serial.print("dist: ");
Serial.println(d);
}
