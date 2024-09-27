#include "CPU.h"
#include <string.h>
#include <iostream>
using namespace std;

CPU::CPU(const char* n, int c, double pr)
	: cores(c), price(pr)
{
	if (n != nullptr) {
		name = new char[strlen(n) + 1];
		strcpy_s(this->name, strlen(n) + 1, n);
	}
}

CPU::CPU(const CPU& other) : cores(other.cores), price(other.price) {
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
}

CPU::~CPU()
{
	delete[]name;
}

void CPU::Print()
{
	cout << "CPU name: " << name << ", Cores: " << cores << ", Price: " << price << endl;
}

char* CPU::GetName() const
{
	return name;
}

int CPU::GetCores() const
{
	return cores;
}

double CPU::GetPrice() const
{
	return price;
}