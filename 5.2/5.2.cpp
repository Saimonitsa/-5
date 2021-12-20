#include <iostream>

using namespace std;

class Base {
public:

	void foo() {
		printf("Base\n");
	}
};

class Desc : public Base {
public:

	void foo() {
		printf("Desc\n");
	}
};

int main() {
	Base* x = new Base();
	x->foo();

}