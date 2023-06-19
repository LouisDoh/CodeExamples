#include <unordered_map>
#include <string>
#include <iostream>

int main() {
	std::unordered_map<int, std::string> bucket = { {1,"hi"}, {2,"hey"} };
	bucket.insert({ 8,"bonjour" });
	for (std::pair<int, std::string> elm : bucket) {
		std::cout << elm.first << ": " << elm.second << "\n";
	} //no guarantee on order here (though we may often find it iterates in order of insertion)
}