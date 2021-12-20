#include <iostream>

using namespace std;

class Animal {
public:
	virtual string classname() {
		return "Animal";
	}
	virtual bool isA(string who) {
		return (who == "Animal");
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
	bool isA(string who) {
		return (who == "Cat" || who == "Animal");
	}
};

class Dog : public Animal {
public:
	string classname() {
		return "Dog";
	}
	bool isA(string who) {
		return (who == "Dog" || who == "Animal");
	}
};
