//Created by: Stpehen Glogiewicz
#pragma once
#include <iostream>
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"

using namespace std;

class Barn
{
private:
	int numAnimals;
	Animal* animals[15];

public:
	Barn();
	void feedBarn();
	void outToPasture(Animal* a, string type, int num);
	~Barn();
};
