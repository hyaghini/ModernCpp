#include <iostream>

using std::cout;
using std::endl;

class Printer {
public:
	void Print(const std::string& str) {
		some_str = str;
		cout << "lvalue: " << str << endl;
	}

	void Print(std::string&& str) {
		some_str = str;
		cout << "rvalue: " << str << endl;
	}
private:
	std::string some_str;
};

int main() {
	std::string hello = "hi";
	Printer printer;
	printer.Print(hello);
	printer.Print("hello");
	printer.Print(std::move(hello));
	return 0;
}