#include "Person.h"
#include "DumbData.h"
#include "Dog.h"
#include <iostream>

void automaticVsDynamic() {
	Person scriptWriter(24, "Louis"); //automatic/'default' allocation
	scriptWriter.happyBirthday();
	std::cout << std::endl;

	Person* riskyUse = new Person(27, "Louis"); //dynamic allocation
	riskyUse->happyBirthday();
	std::cout << std::endl << riskyUse;
	riskyUse = new Person(28, "Dave");
	riskyUse->happyBirthday(); //arrows rather than dots
	std::cout << std::endl;
}

void structEx() {
	DumbData myStruct;
	myStruct.x = 5;
	myStruct.y = 5;
	//myStruct.funFunction(); - inaccessible
	std::cout << "X: " << myStruct.x << " Y: " << myStruct.y;
}

void inheritanceEx() {
	Dog myDog(9, 40, "Fido", "Brown");
	myDog.introduce();
}

int main() {
	inheritanceEx();
}