#include <iostream>
#include <vector>

int main() {
	int num = 0;

	switch (num) {
	case 1:
		std::cout << "Hello" << std::endl;
		break;
	case 2:
		std::cout << "World" << std::endl;
		break;
	default:
		std::cout << "You're doing it wrong" << std::endl;

	}

	return 0;
}