int LSensor=2;
int RSensor=13;
int CSensor=7;
int LMotor_1=3;
int LMotor_2=5;
int RMotor_1=6;
int RMotor_2=9;
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
  if (digitalRead(CSensor)==0 && digitalRead(LSensor)==1 && digitalRead(RSensor)==1)
  {
    analogWrite(LMotor_1,200);
    analogWrite(LMotor_2,0);
    analogWrite(RMotor_1,200);
    analogWrite(RMotor_2,0);
  }
  else if (digitalRead(CSensor)==0 && digitalRead(LSensor)==0 && digitalRead(RSensor)==1)
  {
    analogWrite(LMotor_1,0);
    analogWrite(LMotor_2,200);
    analogWrite(RMotor_1,200);
    analogWrite(RMotor_2,0);
  }
  else if (digitalRead(CSensor)==0 && digitalRead(LSensor)==1 && digitalRead(RSensor)==0)
  {
    analogWrite(LMotor_1,200);
    analogWrite(LMotor_2,0);
    analogWrite(RMotor_1,0);
    analogWrite(RMotor_2,200);
  }

}
