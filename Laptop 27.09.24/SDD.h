#pragma once
class SDD
{
	char* name;
	int capacity;
	double price;
public:
	SDD(const char* n, int c, double pr);
	SDD(const SDD& other);
	~SDD();
	void Print();
	char* GetName() const;
	int GetCapacity() const;
	double GetPrice() const;
};