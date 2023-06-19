#include <iostream>
#include <vector>
#include <string>

void noReference() {
	int firstNumber = 5;
	int secondNumber = firstNumber;

	firstNumber++;
	secondNumber += 5;

	std::cout << "First number: " << firstNumber << "\n";
	std::cout << "Second number: " << secondNumber << "\n";
	//values diverge
}

void square(int& toSquare) {
	toSquare *= toSquare;
}

void printEach(const std::vector<int>& myVector) {
	std::string output = "";
	for (int element : myVector) {
		output += std::to_string(element)+",";
	}
	
	if (!output.empty()) {
		output.pop_back();
	}
	std::cout << output;
}

int main() {
	int myFunnyNumber = 5;
	square(myFunnyNumber);
	std::cout << myFunnyNumber << "\n";

	std::vector<int> myVector = { 1,2,3,4,5 };
	printEach(myVector);
}