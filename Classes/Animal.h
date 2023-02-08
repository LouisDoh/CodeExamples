#pragma once
#include <string>

class Animal {
	protected:
		int age, weight;
		std::string name;
	public:
		Animal(int age, int weight, std::string name);
		void introduce();
		//virtual //toggle the line comment to change behaviour of generic pointer'd dog's speak
			void speak();
};

