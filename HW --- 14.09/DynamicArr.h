#pragma once
class DynamicArr
{
	int* ptr;
	int size;
public:
	DynamicArr();
	DynamicArr(int);
	DynamicArr(const DynamicArr&); // copy constructor
	~DynamicArr();
	void Input();// rand
	void Output();// вывод на консоль
	DynamicArr operator+(int a);
	DynamicArr operator-(int a);
	DynamicArr operator*(int a);
	DynamicArr operator-(DynamicArr rez2);
	DynamicArr operator+(DynamicArr b);
	DynamicArr operator++();
	DynamicArr operator--();
	int* GetPointer();
	int GetSize();
};

