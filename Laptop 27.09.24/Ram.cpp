#include "Ram.h"
#include <string.h>
#include <iostream>
using namespace std;

Ram::Ram(const char* n, int s, double pr)
	: size(s), price(pr)
{
	if (n != nullptr) {
		name = new char[strlen(n) + 1];
		strcpy_s(this->name, strlen(n) + 1, n);
	}
}

Ram::Ram(const Ram& other) : size(other.size), price(other.price) {
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
}

Ram::~Ram()
{
	delete[]name;
}

void Ram::Print()
{
	cout << "Ram name: " << name << ", Size: " << size << ", Price: " << price << endl;
}

char* Ram::GetName() const
{
	return name;
}

int Ram::GetSize() const
{
	return size;
}

double Ram::GetPrice() const
{
	return price;
}