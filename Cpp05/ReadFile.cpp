#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
	int i;
	double a, b;
	std::string s;

	std::ifstream in("test_cols.txt");

	while(in >> i >> a >> s >> b) {
		cout << i << ", " << a << ", "
		<< s << ", " << b << endl;
	}

	return 0;
}