//***************************************************//
//* Author: Katherine Skipper		Date: 10/3/2019	*//
//***************************************************//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
	Skateboard(string brand, string model);
	virtual ~Skateboard();
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_Skateboard_H
