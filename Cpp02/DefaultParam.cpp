#include <iostream>

int Sum (int a, int b = 10);

int Sum (int a, int b) {
	return a + b;
}

int main() {
	int blah = 1;
	int num = Sum(blah);

	std::cout << num << std::endl;

	return 0;
}