#include <iostream>

int randNumber(const int start,const int rangeWidth) {
	srand(time(NULL)); /*try commenting this out and running the program a couple times -
	you'll always get the same number*/
	int num = rand(); //random number between 0 and RAND_MAX
	num = num % rangeWidth; //random number now in range 0 to rangeWidth
	num += start; //random number now in range start to start+rangeWidth

	//int num = rand() % rangewidth + start; //one liner

	return num;
}

void commonMathsFunctions(const int numOne, const int numTwo, const double decimal) {
	std::cout << "The max of " << numOne << " and " << numTwo << " is: " << 
		std::max(numOne, numTwo) << "\n";

	std::cout << "The min of " << numOne << " and " << numTwo << " is: " << 
		std::min(numOne, numTwo) << "\n";

	std::cout << decimal << " rounded is: " << round(decimal) << "\n";
	std::cout << decimal << " rounded down is: " << floor(decimal) << "\n";
	std::cout << decimal << " rounded up is: " << ceil(decimal) << "\n";

	//etc
}

void underAndOver() {
	short myShort = 32767;
	std::cout << "This is the maximum value of a short: " << myShort << "\n";
	myShort += 1;
	std::cout << "This is it + 1 (overflow): " << myShort << "\n";

	short myLowShort = -32768;
	std::cout << "This is the most negative value of a short: " << myLowShort << "\n";
	myLowShort -= 1;
	std::cout << "This is what happens if I subtract 1 (underflow): " << myLowShort;
}

int main() {
	underAndOver();
}