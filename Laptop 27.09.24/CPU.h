#pragma once
class CPU
{
	char* name;
	int cores;
	double price;
public:
	CPU(const char* n, int c, double pr);
	CPU(const CPU& other);
	~CPU();
	void Print();
	char* GetName() const;
	int GetCores() const;
	double GetPrice() const;
};