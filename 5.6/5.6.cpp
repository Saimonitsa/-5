#include<iostream>
#include<conio.h>
using namespace std;

class Base {
public:
	int x, y;
	Base() {
		printf("Base()\n");
	}
	Base(Base* obj) {
		printf("Base(Base* obj)\n");
	}
	Base(Base& obj) {
		printf("Base(Base& obj)\n");
	}
	virtual ~Base() {
		printf("~Base()\n");
	}

};

class Desc : public Base {
public:
	Desc() {
		printf("Desc()\n");
	}
	Desc(Desc* obj) {
		printf("Desc(Desc* obj)\n");
	}
	Desc(Desc& obj) {
		printf("Desc(Desc& obj)\n");
	}
	~Desc() {
		printf("~Desc()\n");
	}
};

void fun1(Base obj) {
	obj.x = obj.x + 1;
	obj.y = obj.y + 1;

}
void fun2(Base& obj) {
	obj.x = obj.x + 1;
	obj.y = obj.y + 1;
}
void fun3(Base* obj) {
	obj->x = obj->x + 1;
	obj->y = obj->y + 1;
}

int main() {
	{
		Base p;
		p.x = 0;
		p.y = 1;


		_getch();
	}
	return 0;

}