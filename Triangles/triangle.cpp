#include <iostream>
#include "triangle.h"

void Box::Volume() {
	volume = L*W*H;
	std::cout << "The volume of the box is " << volume << std::endl;

	return;
}

void Box::SetParameters() {
  	std::cout << "Please enter the length of the box." << std::endl;
	std::cin >> L;

	std::cout << "Please enter the height of the box." << std::endl;
	std::cin >> H;

	std::cout << "Please enter the width of the box." << std::endl;
	std::cin >> W;

}

Box::Box() {};
Box::~Box() {};
