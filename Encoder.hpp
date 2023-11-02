#include <Arduino.h>
#include <isostrem>
#ifndef ENCODER_H_
#define ENCODER_H_
class Encoder {
                public:
                void setup(int ENCA,int ENCB, int IN1, int IN2 );
                void setMotor(int , int , int );
                void readEncoder();
                int calculated distance ();
                private:
               int ENCA ;
               int ENCB ;
              int  IN1 ;
               int  IN2 ;
               int count ;
               int new_count;
               int total_count;
               int pulse_per_revelution;


}
#endif