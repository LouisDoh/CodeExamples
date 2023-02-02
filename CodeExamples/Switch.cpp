#include <iostream>


int main() {
	int day = 8;

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

	case 6:
		std::cout << "Saturday! Finally the weekend.";
		break;

	case 7:
		std::cout << "Sunday. Hope you're making the most of your time off!";
		break;

	default:
		std::cout << "Hmm, I don't think that's a day of the week.";
	}
}