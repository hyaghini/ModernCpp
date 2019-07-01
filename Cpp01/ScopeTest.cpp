#include <iostream>
#include <vector>

int main() {
	int some_number = 1;
	{
		int blah = 2;
	}
	some_number = blah;

	return 0;
}