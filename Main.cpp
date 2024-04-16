#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main() {

	vector<Animal>* A1;

	Dog D1;
	Cat C1;


	D1.MakeSound();
	C1.MakeSound();

	

	/*A1->push_back(&D1);
	A1->push_back(&C1);*/

	return 0;
}