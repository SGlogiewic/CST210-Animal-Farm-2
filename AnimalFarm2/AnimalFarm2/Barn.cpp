//Created by: Stpehen Glogiewicz
#include <iostream>
#include <string>
#include "Barn.h"

using namespace std;

//barn constructor which fills array with animals
Barn::Barn()
{
	//sets numAnimals equal to 0
	numAnimals = 0;
	//fills array with animals
	animals[numAnimals++] = new Chicken("Eggy", 1, 15);
	animals[numAnimals++] = new Chicken("Iggy", 0.3, 2);
	animals[numAnimals++] = new Chicken("Ziggy", 0.6, 3.4);
	animals[numAnimals++] = new Chicken("Jiggy", 0.9, 4);
	animals[numAnimals++] = new Chicken("Steve", 0.7, 6);
	animals[numAnimals++] = new Cow("Jimmy", 5.7, 1502);
	animals[numAnimals++] = new Cow("John", 5.8, 1282);
	animals[numAnimals++] = new Cow("Billy", 5.5, 1000);
	animals[numAnimals++] = new Cow("Bob", 5.2, 1010);
	animals[numAnimals++] = new Cow("Ronald", 5.31, 1391);
	animals[numAnimals++] = new Pig("Carl", 6.1, 2098);
	animals[numAnimals++] = new Pig("Karl", 5.6, 1700);
	animals[numAnimals++] = new Pig("Qarl", 6, 1800);
	animals[numAnimals++] = new Pig("Ckarl", 6, 1800);
	animals[numAnimals] = new Pig("Clyde", 5.9, 1950);
}

//feedBarn function
void Barn::feedBarn()
{
	//for loop that runs the length of the array
	for (int i = 0; i < 15; i++)
	{
		//sets each variable equal to the animal at index i casted to the given type
		Cow* cowPtr = dynamic_cast<Cow*>(animals[i]);
		Chicken* chickPtr = dynamic_cast<Chicken*>(animals[i]);
		Pig* pigPtr = dynamic_cast<Pig*>(animals[i]);
		//checks if cowPtr is a nullptr
		if (cowPtr != nullptr)
		{
			//runs speak and eat functions
			cowPtr->speak();
			cowPtr->eat();
			//checks if the current weight is greater than topWeight
			if (cowPtr->getWeight() >= cowPtr->getTopWeight())
			{
				//runs outToPasture given the cowPtr data and the string cow
				outToPasture(cowPtr, "cow", i);
			}
		}
		//checks if chickPtr is a nullptr
		else if (chickPtr != nullptr)
		{
			//runs speak and eat functions
			chickPtr->speak();
			chickPtr->eat();
			//checks if the current weight is greater than topWeight
			if (chickPtr->getWeight() >= chickPtr->getTopWeight())
			{
				//runs outToPasture given the chickPtr data and the string chicken
				outToPasture(chickPtr, "chicken", i);
			}

		}
		//checks if pigPtr is a nullptr
		else if (pigPtr != nullptr)
		{
			//runs speak and eat functions
			pigPtr->speak();
			pigPtr->eat();
			//checks if the current weight is greater than topWeight
			if (pigPtr->getWeight() >= pigPtr->getTopWeight())
			{
				//runs outToPasture given the pigPtr data and the string pig
				outToPasture(pigPtr, "pig", i);
			}
		}
	}

}

//outToPasture function that takes in an animal pointer, the type as a string, and the index
//in the array
void Barn::outToPasture(Animal* a, string type, int num)
{
	//prints out that the animal is out to the pasture
	cout << a->getName() << " the " << type << " is now in the pasture." << endl;
	cout << "" << endl;
	//casts the animal to all of the types
	Cow* cowPtr = dynamic_cast<Cow*>(animals[num]);
	Chicken* chickPtr = dynamic_cast<Chicken*>(animals[num]);
	Pig* pigPtr = dynamic_cast<Pig*>(animals[num]);
	//if any of the pointers is not null, casts the value to that type and replaces the animal
	//with another of that type
	int nCow = 1;
	int nChick = 1;
	int nPig = 1;
	if (cowPtr != nullptr)
	{
		string digit = to_string(nCow);
		string newName = "Spot the " + digit;
		delete animals[num];
		animals[num] = new Cow(newName, 4.9, 1200);
		cout << animals[num]->getName() + " the " << type << " is now in the barn." << endl;
		cout << "" << endl;
		nCow++;
	}
	else if (chickPtr != nullptr)
	{
		string digit = to_string(nChick);
		string newName = "Harold the " + digit;
		delete animals[num];
		animals[num] = new Chicken(newName, 1, 8);
		cout << animals[num]->getName() + " the " << type << " is now in the barn." << endl;
		cout << "" << endl;
		nChick++;
	}
	else if (pigPtr != nullptr)
	{
		string digit = to_string(nPig);
		string newName = "Ckarl the " + digit;
		delete animals[num];
		animals[num] = new Pig(newName, 5.4, 1850);
		cout << animals[num]->getName() + " the " << type << " is now in the barn." << endl;
		cout << "" << endl;
		nPig++;
	}
}


//deconstructor for barn
Barn::~Barn()
{
	for (int i = 0; i < numAnimals; i++)
	{
		delete animals[i];
	}
}
