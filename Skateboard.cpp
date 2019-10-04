//***************************************************//
//* Author: Katherine Skipper		Date: 10/3/2019	*//
//***************************************************//

#include "Skateboard.h"
#include <iostream>

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
	double mileage = (int(0.1) + (rand() % (int(0.5) - int(0.1) + 1))) * time;
	if (time > 25 && time < 250){
		mileage += (1 + (rand() % (int(time/3) - 1 + 1)));
	}
	return mileage;
}

string Skateboard::toString(){
	return "-> Skateboard\n" + Vehicle::toString();
}