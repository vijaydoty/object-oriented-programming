#include<bits/stdc++.h>
using namespace std;

class Test {
	static int x;
public:
	Test() {
		x++;
	}
	static int getX() {
		return x;
	}
};

int Test::x = 0;

int main() {
	cout << Test::getX() << " ";
	Test t[5];
	cout << Test::getX();
}


//
// Test t2; // stack space, during compile time itself
//
// Test *t3 = new Test(); // heap space, during run time