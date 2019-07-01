#include <iostream>
using std::cout;
using std::endl;

struct A
{
	int data = 10;
};

int main() {
	A a;
	A a_other;
	a_other.data = 200;
	A& a_ref = a;
	A* a_ptr = &a;

	cout << "reference: " << a_ref.data << endl;
	cout << "pointer: " << a_ptr->data << endl;
	a_ptr = &a_other;
	cout << "pointer: " << a_ptr->data << endl;
	return 0;
}