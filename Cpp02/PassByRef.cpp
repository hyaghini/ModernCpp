#include <iostream>

int Sum (int& a, int b) {
	a = 10;
	int sum (a + b);

	return sum;
}

int main() {
	int blah = 1;
	int num = Sum(blah, 2);

	std::cout << num << std::endl;

	return 0;
}