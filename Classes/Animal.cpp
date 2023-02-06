#include "Animal.h"
#include <iostream>

Animal::Animal(int age, int weight, std::string name) :
	age(age), weight(weight), name(name) {}

void Animal::introduce() {
	std::cout << "Hi, I'm " << name << " and I'm " << age << " years old.";
}