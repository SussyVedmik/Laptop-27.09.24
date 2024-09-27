#pragma once
#include "Ram.h"
#include "GraphicCard.h"
#include "SDD.h"
#include "CPU.h"

class Laptop
{
	char* name;
	char* color;
	double price;
	CPU cpu;
	SDD sdd;
	Ram ram;
	GraphicCard graph;
	static int count;
public:
	Laptop(const char* n, const char* c, double pr, const CPU* cp, const SDD* sd, const Ram* ra, const GraphicCard* gr);
	Laptop(const Laptop& other);
	~Laptop();
	void Print();
	char* GetName() const;
	char* GetColor() const;
	double GetPrice() const;
	static int GetCount();
};
