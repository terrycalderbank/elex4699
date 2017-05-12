////////////////////////////////////////////////////////////////
// ELEX 4618 Template project for BCIT
// Created Oct 5, 2016 by Craig Hennesseym modified by Terr Calderbank 25 April 2017
// Last updated March 23, 2017
////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>
#include <thread>

// OpenCV Include
//#include "opencv.hpp"
//#include "highgui.hpp"
#include <opencv2/opencv.hpp>
//#include <opencv2/highgui.hpp>
#include <wiringPi.h>
#include <pigpio.h>
#include <softPwm.h>
#include <iostream>
#include "kbhit.h"
#include "car.h"
#include <math.h>


#define HIGH 1
#define LOW 0
#define ENR 21
#define ENL 20
#define in1R 26
#define in2R 19
#define in1L 6
#define in2L 13
#define pulse 2
#define trigger 2
#define echo 3

#define PWMPERIOD 2500
#define MIDRANGE 1000
#define SPEEDSTEP 100
#define ERROR_RANGE 320
#define ACCEPTABLE_ERROR 10
#define LEFTBIAS 160


//#define servo 3

using namespace std;




void forward()
{
	cout << "FORWARD\n";
	gpioPWM(ENR, MIDRANGE);
	gpioWrite(in2R, LOW);
	gpioWrite(in1R, HIGH);
	
	gpioPWM(ENL, MIDRANGE+LEFTBIAS);
	gpioWrite(in2L, LOW);
	gpioWrite(in1L, HIGH);
	/*softPwmWrite(ENR,PWMPERIOD);			
	digitalWrite(in2R, LOW);
	digitalWrite(in1R, HIGH);
	
	softPwmWrite(ENL,PWMPERIOD);			
	digitalWrite(in2L, LOW);
	digitalWrite(in1L, HIGH);*/
}

void backward()
{
	cout << "BACKWARD\n";
	gpioPWM(ENR, PWMPERIOD/2);
	gpioWrite(in2R, HIGH);
	gpioWrite(in1R, LOW);
	
	gpioPWM(ENL, PWMPERIOD/2 +LEFTBIAS);
	gpioWrite(in2L, HIGH);
	gpioWrite(in1L, LOW);
	
	/*softPwmWrite(ENR,PWMPERIOD);
	digitalWrite(in1R, LOW);
	digitalWrite(in2R, HIGH);
	
	softPwmWrite(ENL,PWMPERIOD);
	digitalWrite(in1L, LOW);
	digitalWrite(in2L, HIGH);*/
}

void left()
{
	cout << "LEFT\n";
	gpioPWM(ENR, PWMPERIOD/2);
	gpioWrite(in2R, LOW);
	gpioWrite(in1R, HIGH);
	
	gpioPWM(ENL, PWMPERIOD/2);
	gpioWrite(in2L, HIGH);
	gpioWrite(in1L, LOW);
	
	/*softPwmWrite(ENR,PWMPERIOD/2);			
	digitalWrite(in2R, HIGH);
	digitalWrite(in1R, LOW);
	
	softPwmWrite(ENL,PWMPERIOD/2);			
	digitalWrite(in2L, LOW);
	digitalWrite(in1L, HIGH);*/
}

void right()
{
	cout << "RIGHT\n";
	gpioPWM(ENR, PWMPERIOD/2);
	gpioWrite(in2R, HIGH);
	gpioWrite(in1R, LOW);
	
	gpioPWM(ENL, PWMPERIOD/2);
	gpioWrite(in2L, LOW);
	gpioWrite(in1L, HIGH);
	/*softPwmWrite(ENR,PWMPERIOD/2);			
	digitalWrite(in2R, LOW);
	digitalWrite(in1R, HIGH);
	
	softPwmWrite(ENL,PWMPERIOD/2);			
	digitalWrite(in2L, HIGH);
	digitalWrite(in1L, LOW);*/
}


void stopcar()
{
	gpioPWM(ENR, 0);
	gpioWrite(in2R, LOW);
	gpioWrite(in1R, LOW);
	
	gpioPWM(ENL, 0);
	gpioWrite(in2L, LOW);
	gpioWrite(in1L, LOW);
	/*digitalWrite(in1R, LOW);
	digitalWrite(in2R, LOW);
	softPwmWrite(ENR,0);
	
	digitalWrite(in1L, LOW);
	digitalWrite(in2L, LOW);
	softPwmWrite(ENL,0);*/
}
/*
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
*/
float get_distance()
{
	//int timeout = millis();
	int timeout = gpioTick();
	int start = 0;
	int stop = 0;
	int time_of_flight = 0;
	//digitalWrite(trigger, HIGH);
	gpioTrigger(trigger, 10, 1);
	//delayMicroseconds(10);
	//digitalWrite(trigger, LOW);
	
	
	while(gpioRead(echo) == LOW && (gpioTick() - timeout) < 1000000);
	start = gpioTick();
	while(gpioRead(echo) == HIGH && (gpioTick() - timeout) < 1000000);
	stop = gpioTick();
	
	time_of_flight = stop - start;
	cout << time_of_flight  << " us" << endl; 
	cout << time_of_flight / 77.56 << " cm" << endl; 
	return time_of_flight  / 77.56;
	
}

bool hallway(int error)
{
	cout << error << "\n\n";
	int speed = (int)abs((float)((error * (PWMPERIOD-MIDRANGE))/ERROR_RANGE));
	static int Lspeed = MIDRANGE;
	static int Rspeed = MIDRANGE;
	float distance = 0;
	for(int count = 1; count > 0; count --)
	{
		distance +=get_distance();
	}
	 distance /= 1;
	cout << distance << endl;
	
	if(distance > 7)
	{
		if(error > ACCEPTABLE_ERROR)
		{
			/*if(distance < 20)	
			{
				Lspeed = (MIDRANGE + speed  + LEFTBIAS )/2 + 100;
				Rspeed = MIDRANGE + 100;
			}
			else
			{*/
				Lspeed = MIDRANGE + speed + LEFTBIAS;
				Rspeed = MIDRANGE;
			//}
			gpioPWM(ENR, Rspeed);
			gpioWrite(in2R, LOW);
			gpioWrite(in1R, HIGH);

			gpioPWM(ENL, Lspeed);
			gpioWrite(in2L, LOW);
			gpioWrite(in1L, HIGH);
			cout << "Left speed: " << Lspeed << " Right speed: " << Rspeed << "\n\n";		
		
		}
		
		else if(error < -ACCEPTABLE_ERROR)
		{
			
			/*if(distance < 20)
			{	
				Rspeed = (MIDRANGE + speed)/2 + 100;
				Lspeed = (MIDRANGE + LEFTBIAS)/2 + 100 ;
			}
			else
			{*/
				Rspeed = MIDRANGE + speed;
				Lspeed = MIDRANGE + LEFTBIAS;
			//}
			gpioPWM(ENR, Rspeed);
			gpioWrite(in2R, LOW);
			gpioWrite(in1R, HIGH);

			gpioPWM(ENL, Lspeed);
			gpioWrite(in2L, LOW);
			gpioWrite(in1L, HIGH);
			cout << "Left speed: " << Lspeed << " Right speed: " << Rspeed << "\n\n";
			
		}
		else
		{
			/*if(distance < 30)
			{
				Rspeed = MIDRANGE / 2 + 100;
				Lspeed = (MIDRANGE + LEFTBIAS )/2 + 100;
			}
			else
			{*/
				Rspeed = MIDRANGE;
				Lspeed = MIDRANGE + LEFTBIAS;
			//}
			
			gpioPWM(ENR, Rspeed);
			gpioWrite(in2R, LOW);
			gpioWrite(in1R, HIGH);

			gpioPWM(ENL, Lspeed);
			gpioWrite(in2L, LOW);
			gpioWrite(in1L, HIGH);
			cout << "Left speed: " << Lspeed << " Right speed: " << Rspeed << "\n\n";
		}
	return false;
	}
	else
	{
		stopcar();
		return true;
	}
}

void execute_turn(Colour input_colour)
{
	if(input_colour == GREEN)
	{
		gpioPWM(ENR, PWMPERIOD);
		gpioWrite(in2R, HIGH);
		gpioWrite(in1R, LOW);
		
		gpioPWM(ENL, PWMPERIOD);
		gpioWrite(in2L, LOW);
		gpioWrite(in1L, HIGH);
		gpioDelay(320000);
		stopcar();
	}
	else if(input_colour == ORANGE)
	{
		gpioPWM(ENR, PWMPERIOD);
		gpioWrite(in2R, LOW);
		gpioWrite(in1R, HIGH);
		
		gpioPWM(ENL, PWMPERIOD);
		gpioWrite(in2L, HIGH);
		gpioWrite(in1L, LOW);
		gpioDelay(320000);
		stopcar();
	}
	else
		stopcar();
}


int main()
{   
   /*while (cv::waitKey(5) != ' ')
   {
      car.cam.Update();
      car.cam.Draw();
   }*/
    
    //int error = 0;
    //int servo = 3;
    
	wiringPiSetupGpio();
	gpioInitialise();
	
	cout << "Initializing\n";
	//softPwmCreate(servo,5.5,200);
	Car car;
	
	gpioSetPWMrange(ENR,PWMPERIOD);
	gpioSetPWMrange(ENL,PWMPERIOD);
	//LEFT
	gpioSetMode(ENL, PI_OUTPUT);
	gpioSetMode(in1L, PI_OUTPUT);
	gpioSetMode(in2L, PI_OUTPUT);
	//RIGHT
	gpioSetMode(ENR, PI_OUTPUT);
	gpioSetMode(in1R, PI_OUTPUT);
	gpioSetMode(in2R, PI_OUTPUT);
	//ULTRASONIC
	gpioSetMode(pulse, PI_OUTPUT);
	gpioWrite(pulse, LOW);
	gpioSetMode(trigger, PI_OUTPUT);
	gpioSetMode(echo, PI_INPUT);
	
		
	cout << "Pins configured\n";
	bool end_of_hall = false;
	bool keep_running = true;	
	
	while(keep_running)
	{
		Colour detected_colour;
		if(kbhit())
		{
			int key = getchar();
			if(key == 'q')
				keep_running = false;
			
		}
		
		detected_colour = car.cam.detect_object();
		while((car.cam.detect_object() == NONE) && (get_distance() < 6))
		{
			backward();
			gpioDelay(500000);
			stopcar();
			
		}		
		
		car.cam.Draw();
		end_of_hall = hallway(car.cam.track_object(detected_colour));
		
		if(end_of_hall)
		{
			execute_turn(car.cam.detect_object());
		}
		
		
	}
	
	
	/*
	while(keep_running)
	{
		if(kbhit())
		{
			int key = getchar();
			if(key == 'q')
				keep_running = false;
		}
			
		
		int temp = 0;
			for(int count = 2; count > 0; count--)
			{
				temp += car.cam.track_object(GREEN);
				car.cam.Draw();
				
			}
			hallway(temp / 2,car.cam.green.area());
			
			//stopcar();
			
			cout << "ERROR: " << car.cam.green_pos.x << endl;

	}*/
	
	/*
	int key;
	
	while(keep_running)
	{
		if(kbhit())
		{
			key = getchar();
			
			switch(key)
			{
				case 'w': forward();
				break;
				
				case 's': backward();
				break;
				
				case 'a': left();
				break;
				
				case 'd': right();
				break;
				
				case ' ': stopcar();
				break;
				
				case 'f': //fire();
				break;
				
				case 'r': cout << get_distance() << endl;
				break;	
				
				case 'q': keep_running = false;
				break;
				
				case 'e':
				execute_turn(GREEN);
				gpioDelay(1000000);
				execute_turn(ORANGE);
				break;
			}
		}
	}*/
	
	stopcar();
	gpioTerminate();
	cout << "DONE\n";
	return 0;
}
