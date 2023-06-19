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

void virtualExample() {
	Dog myDog(10, 40, "Spot", "Brown");
	myDog.speak(); //always works because it's explicitly a dog
	std::cout << std::endl;

	Animal* pointerAnimal;
	pointerAnimal = &myDog;

	pointerAnimal->speak();
	std::cout << std::endl;
	//No virtual keyword -> "The animal makes a noise..."
	//With virtual keyword -> "The dog barks."

	Animal normalAnimal(10, 100, "Mystery");
	normalAnimal.speak(); //still works even with 'virtual'
}

int main() {
	int quantity = 5;
	std::string item = "beans";
	std::cout << quantity <<  (" " + item + "(s) in stock");
}