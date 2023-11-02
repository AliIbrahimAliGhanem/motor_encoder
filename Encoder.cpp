#include <isostrem>
#include <Arduino.h>
#include"Encoder.h"
void setup(int ENCA,int ENCB, int IN1, int IN2 ) {
  Serial.begin(9600);
ENCA ;
ENCB ;
IN1 ;
IN2 ;
int count =0;
 int new_count=0;
 int total_count=0;
 int pulse_per_revelution=0;
  pinMode(ENCA,INPUT_PULLUP);
  pinMode(ENCB,INPUT_PULLUP);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(ENCA),readEncoder,RISING);
}
void setMotor(int dir, int in1, int in2){
  if(dir == 1){//CCW
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
  }
  else if(dir == -1){//CW
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
  }
  else{
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
  } 
}
 void readEncoder(){
  int b = digitalRead(int ENCB);
  if(b > 0){//
    count++;
  }
  else{
    count--;
  }
 }
 int calculated distance (){
total_count=count;
count=new_count;
int distance = (360.0/pulse_per_revelution)* _totalCount;
    return distance;
 }