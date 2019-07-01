#include <iostream>
using namespace std;

class Rect {
public:
	Rect(int w, int h) : width_{w}, height_{h} {}
	int width() {return width_;}
	int height() {return height_;}

private:
	int width_ = 0;
	int height_ = 0;
};

class Square : public Rect {
public:
	explicit Square(int size) : Rect(size, size) {}
};

int main() {
	Square square(10);
	cout << "rect: " << square.width() << " " << square.height() << endl;

	return 0;
}