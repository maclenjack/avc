# include <stdio.h>
# include <time.h>

/*
 *  Kinda two options for going about making this
 *  we can have the start hardcoded aka always move x distance, towards 
 *  gate etc, and then send signal, or we can use 
 *  	while (read_analog(0)>250) from https://github.com/danysat1/ENGR101-AVC/blob/1a7723d3d4967d29eceb6be3a8da3ba62d04cbbf/AVC/mainQ3.cpp
 * 
 *  Either way, they should be able to call the gate file, idk how to make it a 
 *  class in c++ though, so pls help
 * 
 *  After take picture we need to scan the array of pixels in the image, and find
 *  the black ones to be able to make the robot move to the line
 *  once we have this working it should move on quite a bit faster tbh.
 * 
 */
 

int main() {
	printf("Program Started..");
	
	init(1); // set to 1 for debug messages, 0 for final release.
	
	while(true){ // sets up a loop for the rest of our stuff to be in
		take_picture(); // this should call camera to take a ss.
		 
		 // for ()
		
		}
	
	}
	
	
	void forward(int speed){
		// Motors are bound to pins, 1 and 2 should work ok to define
		// which motor to run
		// speeds sould be <255
		if(speed < 255){
			set_motor(motorOne,fixedSpeed);
			set_motor(motorTwo,fixedSpeed);
			update_hardware(); // should apply the new speed to motors? maybe wrong name
			}
		else{
			printf("Robot Speed Should be under 255, stopping..");
			}
		}
		
