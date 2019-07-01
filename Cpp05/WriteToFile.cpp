#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	string filename = "out.txt";
	ofstream outfile(filename);
	if(!outfile.is_open()) { return EXIT_FAILURE; }
	double a = 1.2342342;
	outfile << "Just string" << endl;
	outfile << setprecision(20) << a << endl;

	return 0;
}