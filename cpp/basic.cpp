#include <bits/stdc++.h>
using namespace std;

// static

class Test {
	int x;
public:
	// constructor
	Test() {
		x = 0;
	}
	// encapsulation: data is bound wit hthe methods
	int getX() {
		// class method can access the class data
		return x;
	}

	void setX(int val) {
		// updated the member data
		x = val;
	}
};

int main() {
	Test t; // during creation constructor gets called
	//cout << t.x << endl;

	// objectName.methodName(*args)
	cout << t.getX() << endl;

	t.setX(100);

	cout << t.getX() << endl;
	return 0;
}
