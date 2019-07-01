#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::unique_ptr;

class AbstractShape {
public:
	virtual void Print() const = 0;
};

class Square : public AbstractShape {
public:
	void Print() const override { cout << "Square\n"; }
};

class Triangle : public AbstractShape {
public:
	void Print() const override { cout << "Triangle\n"; }
};

int main() {
	std::vector<unique_ptr<AbstractShape>> shapes;
	shapes.emplace_back(new Square);
	// shapes.emplace_back(std::make_unique<Square>());
	auto triangle = unique_ptr<Triangle>(new Triangle);
	shapes.emplace_back(std::move(triangle));
	for (const auto& shape : shapes) {
		shape->Print();
	}
	return 0;
}