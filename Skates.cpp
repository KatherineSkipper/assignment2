//***************************************************//
//* Author: Katherine Skipper		Date: 10/3/2019	*//
//***************************************************//

#include "Skates.h"

Skates::Skates(){
	skateStyle = "inline";
}

Skates::Skates(string brand, string model, string skateStyle){
	setBrand(brand);
	setModel(model);
	setSkateStyle(skateStyle);
}

Skates::~Skates() = default;

string Skates::getSkateStyle(){
	return skateStyle;
}

void Skates::setSkateStyle(string desiredStyle){
	skateStyle = desiredStyle;
}
double Skates::mileageEstimate(double time){
	double mileage = (0 + (rand() % (3 - 0 + 1))) * time;
	if (time > 15 && time < 350 && skateStyle == "quads") {
		mileage += ((0 + (rand() % (int(time/2) - 0 + 1))) * 2);
	}
	if (time > 15 && time < 350 && skateStyle == "inline"){
		mileage += (0 + (rand() % (int(time/2) - 0 + 1)));
	}
	return mileage;
}
string Skates::toString(){
	return "-> Skates\n" + Vehicle::toString() + "\n\tStyle: " + getSkateStyle();
}