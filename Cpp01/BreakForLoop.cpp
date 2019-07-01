#include <iostream>
#include <vector>

int main() {
	std::vector<int> vec = {1, 2, 3, 4, 5, 6};

	for (const auto& num : vec) {
		if (num % 2 == 0) {
			continue;
		}

		std::cout << num << std::endl;
	}

	return 0;
}