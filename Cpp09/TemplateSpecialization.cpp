template <typename T>
T DummyFunction() {
	T result;
	return result;
}

template <>
int DummyFunction() {
	return 42;
}

int main() {
	DummyFunction<int>();
	DummyFunction<double>();
	return 0;
}