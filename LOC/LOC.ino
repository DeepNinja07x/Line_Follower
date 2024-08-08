// Using "const" for assigning pin numbers is a good practice as it tells the computer that they don't need to be written to
const int LSensor=2;
const int RSensor=13;
const int CSensor=7;
const int LMotor_1=3;
const int LMotor_2=5;
const int RMotor_1=6;
const int RMotor_2=9;

// You should use containers for readings and update them only once per loop This will drastically improve performence as each iteration is much faster
int LSensorReading;
int RSensorReading;
int CSensorReading;

void setup() {
  pinMode(LSensor,INPUT);
  pinMode(RSensor,INPUT);
  pinMode(CSensor,INPUT);
  pinMode(LMotor_1,OUTPUT);
  pinMode(LMotor_2,OUTPUT);
  pinMode(RMotor_1,OUTPUT);
  pinMode(RMotor_1,OUTPUT);
}

void loop() {
  LSensorReading = digitalRead(LSensor);
  RSensorReading = digitalRead(RSensor);
  CSensorReading = digitalRead(CSensor);
  
  if (CSensorReading==0 && LSensorReading==1 && RSensorReading==1)
  {
    analogWrite(LMotor_1,200);
    analogWrite(LMotor_2,0);
    analogWrite(RMotor_1,200);
    analogWrite(RMotor_2,0);
  }
  else if (CSensorReading==0 && LSensorReading==0 && RSensorReading==1)
  {
    analogWrite(LMotor_1,0);
    analogWrite(LMotor_2,200);
    analogWrite(RMotor_1,200);
    analogWrite(RMotor_2,0);
  }
  else if (CSensorReading==0 && LSensorReading==1 && RSensorReading==0)
  {
    analogWrite(LMotor_1,200);
    analogWrite(LMotor_2,0);
    analogWrite(RMotor_1,0);
    analogWrite(RMotor_2,200);
  }

}
