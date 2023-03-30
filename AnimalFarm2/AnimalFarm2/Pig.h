//Created by: Stpehen Glogiewicz
#pragma once
#include <iostream>
#include "Animal.h"

class Pig : public Animal
{
private:
	void gainWeight();
public:
	Pig();
	Pig(string name, double height, double weight);
	void eat();
	void speak();
	double getTopWeight();
};
