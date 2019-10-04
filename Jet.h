//***********************************************//
//* Author: Kathing Skipper		Date: 10/3/2019	*//
//***********************************************//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <cstdlib>

class Jet : public PoweredVehicle {
private:
	int numberOfEngines;
public:
	Jet();
	explicit Jet(string brand, string model,
				 string fuelType, int engNum);
	virtual ~Jet();
	int getNumbOfEngines();
	void setNumbOfEngines(int engNum);
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H