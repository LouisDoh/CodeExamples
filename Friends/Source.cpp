#include <string>
#include <iostream>

class A {
	private:
		int privInt;
		std::string privName;
		void privFunction() const {
			std::cout << "This is a private method of class A";
		}
	public:
		A(const int intArg, const std::string str) {
			this->privInt = intArg;
			this->privName = str;
		}

	friend class B;
	friend void freeFunction(const A goodPal);
};

class B {
	public:
		B() {};
		void friendPrivilege(const A goodPal) {
			goodPal.privFunction();
			std::cout << std::endl << "Being accessed by class B! Hi " << goodPal.privName;
		}
};

void freeFunction(const A goodPal) { //a friend!
	goodPal.privFunction();
	std::cout << std::endl << "Being accessed by a free function!";
}

void freeFunction() { //not a friend - try accessing private A members here
	std::cout << "I do nothing!";
}

int main() {
	A firstClass(5, "Dave");
	B myVar;
	myVar.friendPrivilege(firstClass);
	std::cout << std::endl;
	freeFunction(firstClass);
}