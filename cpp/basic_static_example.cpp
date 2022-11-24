/*

Special Keword

1. this keyword
	- When local variable's name is same as member's name,
	  we can access member using this pointer.
	- To return reference to the calling object
	- Can be used for chained funciton calls on an object

2. static keyword
	- let us say we want to have configuration to change the toughness of the space wars game
	- this 'difficulty' of the game is going to be same for all the spaceships in the game
	- if we store it separately in all the objects, we will have to pay the price to maintain it
	  consistently in all of these objects
	  even updation will take O(N) time complexity
	- we will keep a single copy in the memory for all the objects of SpaceShip for the difficulty variable
	  this is a static variable
		- although it can be changed
		- it is named static because all the objects have the exact same copy (ONE COPY) of this variable
		- it's no of copies do not change as the no of object change
	- shared by all the objects



Global and static variables are initialized to their default values because 
it is in the C or C++ standards and it is free to assign a value by zero at compile time. 
Both static and global variable behave same to the generated object code. 
These variables are allocated in .bss file and at the time of loading it allocates 
the memory by getting the constants alloted to the variables.


The default value of static variable is zero.

*/

#include<bits/stdc++.h>
using namespace std;

//static keyword 


class SpaceShip {
	string name;
	int shieldStrength;
	int numOfMissiles;
	//int difficulty; // 0 for easy, 1 for medium, 2 for tough
	static int difficulty;
public:
	
	SpaceShip(string name) {
		// this is a pointer to the object on which the method is called
		// this.name = name; //in java or similar language
		this->name = name;
	}

	void firstMissile() {
		if (numOfMissiles > 0) {
			--numOfMissiles;
		}
	}

	string getName() {
		return name;
	}

	SpaceShip giveMeMyOwnReference() {
		return (*this); //*, used to dereference and get the exact object
	}

	int getGameDifficulty() { // this works fine, but each object will have it's copy
		return difficulty;
	}

	// static methods to access the static data
	// these methods will also be defined on the class level
	// className.methodName(*args)
	static int getDifficulty() {
		// static methods can only access the static data
		// cout<< name << endl;
		return difficulty;
	}

	static void changeDifficulty(int newDifficulty) {
		difficulty = newDifficulty;
	}
};

// assign the initial data outside the class
// we need to manually assign memory resource to the static variable
// dataType className::(scope resolution operator) nameOfVariable = value;
// even though private we can assign it, one time assignment
int SpaceShip::difficulty;


int main() {
	SpaceShip mySpaceShip("StarFighter");

	//cout << mySpaceShip.getName() << endl;
	//cout << mySpaceShip.giveMeMyOwnReference().getName() << endl;

	SpaceShip cargoShuttle("CargoShuttle");
	SpaceShip warpCruiser("WarpCruiser");

	//how to access static
	// ClassName.propertyName -> java or similar
	// ClassName::propertyName -> CPP
	
	//cout << cargoShuttle.difficulty << endl; // ->EROOR

	//cout << SpaceShip::difficulty << endl;
	cout << warpCruiser.getGameDifficulty() << endl;
	SpaceShip::changeDifficulty(3);
	cout << SpaceShip::getDifficulty() << endl;

	return 0;
}