#pragma once
class GraphicCard
{
	char* name;
	int capacity;
	double price;
public:
	GraphicCard(const char* n, int c, double pr);
	GraphicCard(const GraphicCard& other);
	~GraphicCard();
	void Print();
	char* GetName() const;
	int GetCapacity() const;
	double GetPrice() const;
};