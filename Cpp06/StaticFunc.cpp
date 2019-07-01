#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
	Point(int x, int y) : x_{x}, y_{y} {}
	float Distance( const Point& other) const {
		float x_diff = x_ - other.x_;
		float y_diff = y_ - other.y_;
		return sqrt(x_diff * x_diff + y_diff * y_diff);
	}
	static float Distance(const Point& a, const Point& b) {
		return a.Distance(b);
	}
private:
	int x_ = 0;
	int y_ = 0;
};

int main() {
	Point a(1, 1);
	Point b(2, 2);

	cout << "Distance: " << a.Distance(b) << endl;
	cout << "Distance: " << Point::Distance(a, b) << endl;
	return 0;
}