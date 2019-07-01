#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> vec = {"Hello", "World"};

	for (const auto& c : vec.front()) {
		std::cout << c << std::endl;
	}

	for (int i = 0; i < vec.size(); ++i) {
		std::cout << vec[i] << std::endl;
	}

	return 0;
}