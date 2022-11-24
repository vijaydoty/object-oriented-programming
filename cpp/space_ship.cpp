#include<iostream>
#include<string>
using namespace std;

class SpaceShip {
protected:
	string callSign; // name
	int shieldStrength;

public:
	SpaceShip() {
		cout << "SpaceShip constructor" << endl;
		callSign = "the nameless ship";
		shieldStrength = 100;
	}

	void firstMissile() {
		cout << "firing a normal missile" << endl;
	}

	void reduceShield(int amount) {
		shieldStrength = amount;
		if (shieldStrength < 0) {
			shieldStrength = 0;
		}
	}

	int getShieldStrength() {
		return shieldStrength;
	}

	void print() {
		cout << "Name : " << callSign << endl;
		cout << "Shield Strength is : " << shieldStrength << endl;
	}
};

// : single colon

/* C++                  (mode)
 * class SubClassName : public BaseClassName {
 *  // definition
 * };
 *
 * 3 modes of inheritance: private, public, protected
 * 
 * Java
 * 
 * (mode)
 * public static SubClassName extends BaseClassName {
 *  // definition
 * }
 * 
 * 
 * Python
 * class SubClassName(BaseClassName):
 *		#definition
 * 
 * Ruby
 * class SubClassName < BaseClassName
*/

class FireFighter : public SpaceShip {
	int fireStrength;
public:
	FireFighter() {
		cout << "Calling fire fighter's constructor" << endl;
		fireStrength = getShieldStrength() * 2;
		cout << "Fire Strength: " << fireStrength << endl;
	}
	//override the base class's functionality
	void fireMissile() {
		cout << "Firing a fire fighter's missile" << endl;
	}

	void print() {
		cout << "Name : " << callSign << endl;
		cout << "Shield Strength is : " << shieldStrength << endl;
		cout << "Fire Strength is : " << fireStrength << endl;
	}
};


class CargoShuttle : public SpaceShip {
	int shuttleStrength;
public:
	CargoShuttle() {
		cout << "Calling cargo shuttle's constructor" << endl;
		shuttleStrength = 50;
	}

	void fireMissile() {
		cout << "Firing a cargo shuttle's missile" << endl;
	}

	void print() {
		cout << "Name : " << callSign << endl;
		cout << "Shield Strength is : " << shieldStrength << endl;
		cout << "Shuttle Strength is : " << shuttleStrength << endl;
	}
};

int main() {

	SpaceShip ship;
	ship.print();
	cout << endl;
/*
 * When we create an object of the derived class
 * then the data for derived class need to be connected with memory
 * so constructor needs to be called
 * but before that
 * we are inheriting some attributes / methods from the base class
 * 
 * 1. Why do we need to call base constructor?
 * those base class methods might use some of the base class's attributes
 * so we need to initialize them for sure
 * 
 * - we for sure need to call the base class's constructor
 * 
 * 2. What is the order of constructor calls?
 * - before the derived class's object comes to existence
 * - we need to make sure we initialize the data properly for it's base(parent)

*/

	FireFighter myFireFighter;
	myFireFighter.fireMissile();
	myFireFighter.print();
	myFireFighter.reduceShield(-10);
	myFireFighter.print();

	return 0;
}