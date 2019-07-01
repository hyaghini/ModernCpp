#include <iostream>

int& Sum (int a, int b) {
	int sum (a + b);

	return sum;
}

int main() {
	int num = Sum(1, 2);

	std::cout << num << std::endl;

	return 0;
}