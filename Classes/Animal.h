#pragma once
#include <string>

class Animal {
	protected:
		int age, weight;
		std::string name;
	public:
		Animal(int age, int weight, std::string name);
		void introduce();
};

