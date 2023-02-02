#include "Person.h"
#include <string>
#include <iostream>

Person::Person(unsigned int age, std::string name) {
	this->age = age;
	this->name = name;
}

void Person::happyBirthday() {
	this->age++;
	std::cout << "Hooray! It's my Birthday! I'm " << this->age << " today!";
}