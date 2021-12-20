#include <iostream>
#include <memory>
using namespace std;

int main() {

	unique_ptr<int> p1(new int(5));

	unique_ptr<int> p2;

	p2 = move(p1);

	p2.swap(p1);

	unique_ptr<int> p3(new int(5));
	int* p = p3.get();

	int* p4 = new int(6);
	unique_ptr<int> p5(p4);
	p5.reset();

	int* p6 = new int(7);
	unique_ptr<int> p7(p6);
	p7.release();

	shared_ptr<int> sh1(new int(5));
	shared_ptr<int> sh2(sh1);

	return 0;

}