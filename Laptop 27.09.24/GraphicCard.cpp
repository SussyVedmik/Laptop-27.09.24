#include "GraphicCard.h"
#include <string.h>
#include <iostream>
using namespace std;

GraphicCard::GraphicCard(const char* n, int c, double pr)
	: capacity(c), price(pr)
{
	if (n != nullptr) {
		name = new char[strlen(n) + 1];
		strcpy_s(this->name, strlen(n) + 1, n);
	}
}

GraphicCard::GraphicCard(const GraphicCard& other) : capacity(other.capacity), price(other.price) {
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
}

GraphicCard::~GraphicCard()
{
	delete[]name;
}

void GraphicCard::Print()
{
	cout << "GraphicCard name: " << name << ", Capacity: " << capacity << ", Price: " << price << endl;
}

char* GraphicCard::GetName() const
{
	return name;
}

int GraphicCard::GetCapacity() const
{
	return capacity;
}

double GraphicCard::GetPrice() const
{
	return price;
}
