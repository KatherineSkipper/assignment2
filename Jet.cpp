//***************************************************//
//* Author: Katherine Skipper		Date: 10/3/2019	*//
//***************************************************//

#include "Jet.h"

Jet::Jet(){
	numberOfEngines = 1;
}

Jet::Jet(string brand, string model, string fuelType, int engNum){
	setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumbOfEngines(engNum);
}

Jet::~Jet() = default;

int Jet::getNumbOfEngines(){
	return numberOfEngines;
}

void Jet::setNumbOfEngines(int engNum){
	if (engNum >= 0){
		numberOfEngines = engNum;
	}else{
		numberOfEngines = 1;
	}
}

double Jet::mileageEstimate(double time){
	double mileage = (40 + (rand() % (100 - 40 + 1))) * time;
	if (numberOfEngines > 2 && fuelType == "Rocket"){
		mileage += ((mileage * 0.055) * numberOfEngines);
	}
	return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engine: " +
            std::to_string(getNumbOfEngines());
}