template <class T>
class Myclass {
public:
	Myclass(const T& smth) : smth_(smth) {}
private:
	T smth_;
}

int main() {
	Myclass<int> my_object(10);
	Myclass<double> my_double_object(10.0);
	return 0;
}