#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>
#include "kbhit.h"
#include "car.h"

#define ENL 21
#define ENR 20
#define in1L 26
#define in2L 19
#define in1R 6
#define in2R 13
#define pulse 2
#define trigger 2
#define echo 3

#define PWMPERIOD 2500

//#define servo 3

using namespace std;

void forward()
{
	cout << "FORWARD\n";
	softPwmWrite(ENR,PWMPERIOD);			
	digitalWrite(in2R, LOW);
	digitalWrite(in1R, HIGH);
	
	softPwmWrite(ENL,PWMPERIOD);			
	digitalWrite(in2L, LOW);
	digitalWrite(in1L, HIGH);
}

void backward()
{
	cout << "BACKWARD\n";
	softPwmWrite(ENR,PWMPERIOD);
	digitalWrite(in1R, LOW);
	digitalWrite(in2R, HIGH);
	
	softPwmWrite(ENL,PWMPERIOD);
	digitalWrite(in1L, LOW);
	digitalWrite(in2L, HIGH);
}

void left()
{
	cout << "LEFT\n";
	softPwmWrite(ENR,PWMPERIOD);			
	digitalWrite(in2R, HIGH);
	digitalWrite(in1R, LOW);
	
	softPwmWrite(ENL,PWMPERIOD);			
	digitalWrite(in2L, LOW);
	digitalWrite(in1L, HIGH);
}

void right()
{
	cout << "RIGHT\n";
	softPwmWrite(ENR,PWMPERIOD);			
	digitalWrite(in2R, LOW);
	digitalWrite(in1R, HIGH);
	
	softPwmWrite(ENL,PWMPERIOD);			
	digitalWrite(in2L, HIGH);
	digitalWrite(in1L, LOW);
}


void stopcar()
{
	digitalWrite(in1R, LOW);
	digitalWrite(in2R, LOW);
	softPwmWrite(ENR,0);
	
	digitalWrite(in1L, LOW);
	digitalWrite(in2L, LOW);
	softPwmWrite(ENL,0);
}

void fire()
{
	cout << "FIRING\n\n";
	
	softPwmWrite(3, 12);
	delay(500);
	softPwmWrite(3, 15.5);
	delay(1000);
	digitalWrite(pulse,HIGH);
	delay(18);
	digitalWrite(pulse,LOW);
	softPwmWrite(3, 5.5);
	
}

void get_distance()
{
	int timeout = millis();
	int start = 0;
	int stop = 0;
	int time_of_flight = 0;
	digitalWrite(trigger, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigger, LOW);
	
	while(digitalRead(echo) == LOW && (millis() - timeout) < 1000);
	start = micros();
	while(digitalRead(echo) == HIGH && (millis() - timeout) < 1000);
	stop = micros();
	
	time_of_flight = stop - start;
	cout << time_of_flight  << " us" << endl; 
	cout << time_of_flight * 0.01286 << " cm" << endl; 
	
}
