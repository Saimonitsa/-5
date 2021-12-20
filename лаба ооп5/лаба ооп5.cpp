#include <iostream>

using namespace std;

class Animal {
public:
	void sound() {
		printf("Animal::sound\n");
	}
	void sound1() {
		printf("!!\n");
	}
};

class Cat : public Animal {
public:
	void catch_() {
		printf("Cat::catch_\n");
	}
	void sound1() {
		printf("mew-mew\n");
	}
};

int main() {
	Animal* a = new Cat;
	Cat* c = new Cat;
	a->sound();
	c->catch_();
	c->sound();

	a->sound1();
	c->sound1();
}