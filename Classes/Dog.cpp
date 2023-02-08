#include "Dog.h"
#include <string>
#include <iostream>

Dog::Dog(int age, int weight, std::string name, std::string furColour) : 
	Animal(age,weight,name), furColour(furColour) {}

void Dog::speak() {
	std::cout << "The dog barks.";
}