//Created by: Stpehen Glogiewicz
#include <iostream>
#include "Animal.h"
#include "Pig.h"
using namespace std;
//gainWeight function
void Pig::gainWeight()
{
	//sets the weight to the current weight plus 4
	setWeight(getWeight() + 4);
}

//pig default constructor that inherits from animal class
Pig::Pig() : Animal() {}

//pig parameterized constructor that inherits from animal class
Pig::Pig(string name, double height, double weight) : Animal(name, height, weight) {}

//eat function
void Pig::eat()
{
	//prints out that the pig is eating
	cout << getName() << " the pig is eating " << endl;
	//runs gainWeight function
	gainWeight();
	//prints out results of gainWeight function
	cout << getName() << " gained 4 pounds." << endl;
	cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
	cout << "" << endl;
}

void Pig::speak()
{
	cout << "Oink" << endl;
}

double Pig::getTopWeight()
{
	return 800;
}
