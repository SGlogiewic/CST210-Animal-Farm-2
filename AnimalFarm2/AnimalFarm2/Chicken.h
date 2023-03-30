//Created by: Stpehen Glogiewicz
#pragma once
#include <iostream>
#include "Animal.h"

class Chicken : public Animal
{
private:
	void gainWeight();
public:
	Chicken();
	Chicken(string name, double height, double weight);
	void eat();
	void speak();
	double getTopWeight();
};
