#include "Laptop.h"
#include <string.h>
#include <iostream>
using namespace std;

int Laptop::count = 0;

Laptop::Laptop(const char* n, const char* c, double pr, const CPU* cp, const SDD* sd, const Ram* ra, const GraphicCard* gr)
	: price(pr), cpu(*cp), sdd(*sd), ram(*ra), graph(*gr)
{
	if (n != nullptr) {
		name = new char[strlen(n) + 1];
		strcpy_s(this->name, strlen(n) + 1, n);
	}

	else {
		name = nullptr;
	}

	if (c != nullptr) {
		color = new char[strlen(c) + 1];
		strcpy_s(this->color, strlen(c) + 1, c);
	}

	else {
		color = nullptr;
	}

	count++;
}

Laptop::Laptop(const Laptop& other)
	: price(other.price), cpu(other.cpu), sdd(other.sdd), ram(other.ram), graph(other.graph)
{
	if (other.name != nullptr) {
		name = new char[strlen(other.name) + 1];
		strcpy_s(name, strlen(other.name) + 1, other.name);
	}
	else {
		name = nullptr;
	}

	if (other.color != nullptr) {
		color = new char[strlen(other.color) + 1];
		strcpy_s(color, strlen(other.color) + 1, other.color);
	}
	else {
		color = nullptr;
	}

	count++;
}

Laptop::~Laptop()
{
	if (name != nullptr) {
		delete[] name;
		name = nullptr;
	}
	if (color != nullptr) {
		delete[] color;
		color = nullptr;
	}
	--count;
}

void Laptop::Print()
{
	cout << "Model: " << name << endl;
	cout << "Color: " << color << endl;
	cout << "Price: " << price << endl;
	cout << "CPU: ";
	cpu.Print();
	cout << "SDD: ";
	sdd.Print();
	cout << "RAM: ";
	ram.Print();
	cout << "GraphicCard:";
	graph.Print();
}

char* Laptop::GetName() const
{
	return name;
}

char* Laptop::GetColor() const
{
	return color;
}

double Laptop::GetPrice() const
{
	return price;
}

int Laptop::GetCount()
{

	return count;
}