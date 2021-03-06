#include <iostream>

using namespace std;

class Animal {
public:
	virtual string classname() {
		return "Animal";
	}
};

class Cat : public Animal {
public:
	void catch_() {
		printf("Cat::catch_\n");
	}
	string classname() {
		return "Cat";
	}
};

class Dog : public Animal {
public:
	string classname() {
		return "Dog";
	}
};

int main() {
	Animal* zoo[10];
	for (int i = 0; i < 10; i++) {
		if (rand() % 2 == 0)
			zoo[i] = new Cat;
		else
			zoo[i] = new Dog;
	}

	for (int i = 0; i < 10; i++) {
		if (zoo[i]->classname() == "Cat")
			((Cat*)zoo[i])->catch_();
	}

	for (int i = 0; i < 10; i++) {
		Cat* c = dynamic_cast<Cat*>(zoo[i]);
		if (c != 0)
			c->catch_();
	}

}


