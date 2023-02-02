#include <iostream>

void basicSwitch(const int day) {
	switch (day) {
	case 1:
		std::cout << "Monday :(";
		break;

	case 2:
		std::cout << "Tuesday!";
		break;

	case 3:
		std::cout << "Ahh, Wednesday. Halfway there!";
		break;

	case 4:
		std::cout << "Thursday!";
		break;

	case 5:
		std::cout << "Friday! Just get through today!!";
		break;

	//case 6:
	//	std::cout << "Saturday! Finally the weekend.";
	//	break;

	//case 7:
	//	std::cout << "Sunday. Hope you're making the most of your time off!";
	//	break;

	case 6: case 7:
		std::cout << "Hooray, it's the weekend!";
		break;
	default:
		std::cout << "Hmm, I don't think that's a  day of the week.";
	}
}

void daysOfXmas(const int day) {
	std::string nth;
	switch (day) {
	case 1:
		nth = "st";
		break;
	case 2:
		nth = "nd";
		break;
	case 3:
		nth = "rd";
		break;
	default:
		nth = "th";
	}

	std::cout << "On the " << day << nth << " day of Christmas, my true love gave to me:" << std::endl;

	switch (day) {
	case 12:
		std::cout << "Twelve drummers drumming," << std::endl;
	case 11:
		std::cout << "Eleven pipers piping," << std::endl;
	case 10:
		std::cout << "Ten lords a-leaping," << std::endl;
	case 9:
		std::cout << "Nine ladies dancing," << std::endl;
	case 8:
		std::cout << "Eight maids a-milking," << std::endl;
	case 7:
		std::cout << "Seven swans a-swimming," << std::endl;
	case 6:
		std::cout << "Six geese a-laying," << std::endl;
	case 5:
		std::cout << "Five gold rings," << std::endl;
	case 4:
		std::cout << "Four calling birds," << std::endl;
	case 3:
		std::cout << "Three french hens," << std::endl;
	case 2:
		std::cout << "Two turtle-doves,\nand ";
	case 1:
		std::cout << "a partridge in a pear tree!";
		break;
	default:
		std::cout << "Not much, because I didn't know how many days of Christmas " <<
			"there were.";
	}
}

int main() {
	basicSwitch(6);

	//daysOfXmas(10);
}

