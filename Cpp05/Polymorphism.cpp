#include <iostream>
using namespace std;

class Rect {
public:
	Rect(int w, int h) : width_{w}, height_{h} {}
	virtual void Print() const {
		cout << "rect: " << width_ << " " << height_ << endl;
	}
protected:
	int width_ = 0;
	int height_ = 0;
};

class Square : public Rect {
public:
	explicit Square(int size) : Rect(size, size) {}
	void Print() const override {
		cout << "square: " << width_ << " " << height_ << endl;
	}
};

void Print(const Rect& rect) { rect.Print(); }
int main() {
	Square square(10);
	Rect rect(10, 20);
	Print(square);
	Print(rect);

	return 0;
}