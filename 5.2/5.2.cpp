#include <iostream>

using namespace std;

class Base {
public:

	virtual void foo() {

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

	Desc* x1 = new Desc();
	x1->foo();

	Base* x2 = new Desc();
	x2->foo();


}