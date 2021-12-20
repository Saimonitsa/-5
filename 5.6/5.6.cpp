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

		fun1(p);
		fun1(p);
		fun3(&p);

		Base* p1 = new Base();
		p1->x = 2;
		p1->y = 3;
		fun1(p1);
		delete p1;

		Base* p2 = new Base();
		p2->x = 4;
		p2->y = 5;
		fun2(*p2);
		delete p2;

		Base* p3 = new Base();
		p3->x = 6;
		p3->y = 7;
		fun3(p3);
		delete p3;

		_getch();
	}
	return 0;

}