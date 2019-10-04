//***************************************************//
//* Author: Katherine Skipper		Date: 10/3/2019	*//
//***************************************************//

#ifndef DRIVINGSIMULATOR_SKATES_H
#define DRIVINGSIMULATOR_SKATES_H

#include "Vehicle.h"

class Skates : public Vehicle {
private:
	string skateStyle;
public:
	Skates();
	Skates(string brand, string model, string skateStyle);
	virtual ~Skates();
	string getSkateStyle();
	void setSkateStyle(string desiredStyle);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_SKATES_H
