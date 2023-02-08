#pragma once
#include <string>
#include "Animal.h"

class Dog : public Animal {
	public:
		Dog(int age, int weight, std::string name, std::string furColour);
		std::string furColour;
		void speak();
};

