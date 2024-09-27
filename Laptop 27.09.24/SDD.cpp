#include "SDD.h"
#include <string.h>
#include <iostream>
using namespace std;

SDD::SDD(const char* n, int c, double pr)
	: capacity(c), price(pr)
{
	if (n != nullptr) {
		name = new char[strlen(n) + 1];
		strcpy_s(this->name, strlen(n) + 1, n);
	}
}

SDD::SDD(const SDD& other) : capacity(other.capacity), price(other.price) {
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
}

SDD::~SDD()
{
	delete[]name;
}

void SDD::Print()
{
	cout << "SDD name: " << name << ", Capacity: " << capacity << ", Price: " << price << endl;
}

char* SDD::GetName() const
{
	return name;
}

int SDD::GetCapacity() const
{
	return capacity;
}

double SDD::GetPrice() const
{
	return price;
}