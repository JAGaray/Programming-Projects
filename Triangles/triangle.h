/* Author: Julian Garay
	 Class: CSCI 235
	 Task: Personal
	 Date: 3/25/2017

	 Parameters: This program is designed to take inputs of dimensions of a box from a user,
	 						 then calculate the volume from those inputs by passing the volume by reference.
	 						 It will then return the volume for the user.
*/



#ifndef BOX_H_
#define BOX_H_

#include <iostream>

class Box {
 public:
   Box();
   ~Box();
   void Volume();
   void SetParameters();

 private:
 	 double L;
 	 double H;
 	 double W;
 	 double volume;
};

#endif
