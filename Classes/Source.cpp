#include "Person.h"
#include "DumbData.h"
#include <iostream>

int main() {
	Person scriptWriter(24, "Louis"); //automatic/'default' allocation
	scriptWriter.happyBirthday();
	std::cout << std::endl;

	Person* wrongUse = new Person(27, "Louis"); //dynamic allocation
	wrongUse->happyBirthday();
	std::cout << std::endl << wrongUse;
	wrongUse = new Person(28, "Dave");
	wrongUse->happyBirthday(); //arrows rather than dots
	std::cout << std::endl;

	DumbData myStruct;
	myStruct.x = 5;
	myStruct.y = 5;
	//myStruct.funFunction(); - inaccessible
	std::cout << "X: " << myStruct.x << " Y: " << myStruct.y;

}