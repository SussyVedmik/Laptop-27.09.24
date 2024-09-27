#pragma once
class Ram
{
	char* name;
	int size;
	double price;
public:
	Ram(const char* n, int s, double pr);
	Ram(const Ram& other);
	~Ram();
	void Print();
	char* GetName() const;
	int GetSize() const;
	double GetPrice() const;
};