#include<iostream>
#include<string>
using namespace std;


// Interfaces
class Shape {
public:
	virtual double getArea() = 0;
};

class SpaceShip {
protected:
	string callSign; // name
	int shieldStrength;

public:
	SpaceShip() {
		callSign = "the nameless ship";
		shieldStrength = 100;
	}

	string getName() {
		return callSign;
	}

	int getShieldStrength() {
		return shieldStrength;
	}

	void print() {
		cout << "Name : " << callSign << endl;
		cout << "Shield Strength is : " << shieldStrength << endl;
	}

	// abstract method
	//virtual void fireMissle() = 0;

	// not an abstract method
	virtual void firstMissile() {
		cout << "Firing Missile";
	};
};

int main() {
	SpaceShip spaceShip;
	spaceShip.print();
	return 0;
}