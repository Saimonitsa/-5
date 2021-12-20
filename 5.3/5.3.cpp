#include <iostream>

using namespace std;

class Animal {
public:
	Animal() {
		printf("Animal::Animal()\n");
	}
	//~Animal() {
	virtual ~Animal() {
		printf("Animal::~Animal()\n");
	}
};
class Cat : public Animal {
public:
	Cat() {
		printf("Cat::Cat()\n");
	}
	~Cat() {
		printf("Cat::~Cat()\n");
	}
};

int main() {

	Animal* a = new Animal;

	delete a;

}