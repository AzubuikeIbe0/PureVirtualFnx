#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	string sound;
public:
	virtual void MakeSound() = 0;
};

