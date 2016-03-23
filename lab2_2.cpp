//1315019 JeeSeon Kim
#include "lab2_2.h"

#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9
#define DUTY_CYCLE 10

void myAnalogWrite(int pin, int percent, int time){
	for(int i=0;i<(time/DUTY_CYCLE);i++){
		digitalWrite(pin,1);
		delay((double)DUTY_CYCLE*percent/100);
		digitalWrite(pin,0);
		delay((double)DUTY_CYCLE*(100-percent)/100);
	}
}

void setup()
{
	pinMode(REAR_LED_PIN,OUTPUT);
}


void loop()
{
	for(int i=100;i>=0;i-=1)
		myAnalogWrite(REAR_LED_PIN, i,10000/100);

	exit(0);
}
