#include <iostream>
#include <memory>
using namespace std;

int main() {

	unique_ptr<int> p1(new int(5));

	unique_ptr<int> p2;

	p2 = move(p1);

	p2.swap(p1);
}