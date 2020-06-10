#include<iostream>
#include<typeinfo>
using namespace std;

/*
auto

Let's see how we can use auto effectively as well as break auto with ambiguity.
*/



void test_auto() {
	auto x = 4;
	cout << "Expected data type of x: int" << endl;
	cout << "Real data type of x: " << typeid(x).name() << endl;
}

int main() {
	// Keyword: auto
	test_auto();
	return 0;
}



