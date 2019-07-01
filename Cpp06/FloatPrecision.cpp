#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	float pi = M_PI;
	float i = 10000000;
	cout << "pi: " << pi << endl;
	cout << setprecision(20);
	cout << "i: " << i << endl;
	cout << "sum: " << i + pi << endl;
	return 0;
}