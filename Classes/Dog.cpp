#include "Dog.h"
#include <string>

Dog::Dog(int age, int weight, std::string name, std::string furColour) : 
	Animal(age,weight,name), furColour(furColour) {}