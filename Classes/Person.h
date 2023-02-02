#pragma once
#include <string>

class Person
{
	private:
		unsigned int age;
		std::string name;

	public:
		Person(unsigned int age, std::string name);
		void happyBirthday();
};

