template <typename T>
T DummyFunction() {
	T result;
	return result;
}

int main() {
	DummyFunction<int>();
	DummyFunction<double>();
	return 0;
}