#include <iostream>
#include <cmath>
#include <algorithm>

using std::cout;
using std::endl;

int main() {
	double* data = nullptr;
	size_t size = pow(1024, 3) / 8;
	for (int i = 0; i < 4; ++i) {
		data = new double[size];
		std::fill(data, data + size, 1.23);

		cout << "Iteration: " << i << "done!" << endl;
	}

	delete[] data;
	int unused;
	std::cin >> unused;

	return 0;
}