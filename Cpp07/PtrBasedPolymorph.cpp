#include <iostream>
#include <vector>

using std::cout;

class AbstractShape {
public:
	virtual void Print() const = 0;
};

class Square : public AbstractShape {
public:
	void Print() const override { cout << "Square\n"; }
};

class Triangle : public AbstractShape {
	void Print() const override { cout << "Triangle\n"; }
};

int main() {
	std::vector<AbstractShape*> shapes;
	Square square;
	Triangle triangle;
	shapes.push_back(&square);
	shapes.push_back(&triangle);
	for (const auto* shape : shapes) { shape->Print(); }
	return 0;
}