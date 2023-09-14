#include "DynamicArr.h"
#include <iostream>
using namespace std;

DynamicArr::DynamicArr() :ptr(nullptr), size(0)
{}
DynamicArr::DynamicArr(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S];
}

DynamicArr::DynamicArr(const DynamicArr& a)// copy constructor
{
	cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArr::~DynamicArr()
{
	cout << "Destruct\n";
	delete[] ptr;
}
void DynamicArr::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArr::Output()
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << "\t";
	}
	cout << "\n---------------------------------\n";
}
DynamicArr DynamicArr::operator+(int a)
{
	DynamicArr rez;
	rez.size = this->size+a;
	rez.ptr = new int[rez.size];

	for (int i = 0; i < rez.size; i++)
	{
		if (i >= rez.size - a) {
			rez.ptr[i] = 0;
		}
		else {
			rez.ptr[i] = this->ptr[i];
		}
		
	}

	return rez;

}
DynamicArr DynamicArr::operator-(int a)
{
	if (this->size > 2) 
	{
		DynamicArr rez;
		rez.size = this->size-a;
		rez.ptr = new int[rez.size];

		for (int i = 0; i < rez.size; i++) 
		{
			rez.ptr[i] = this->ptr[i];
		}
		return rez;
	}
	else {
		cout << "Error: size < 2" << endl;
		return *this;
	}
}
DynamicArr DynamicArr ::operator*(int a) {
	DynamicArr rez;
	rez.size = this->size;
	rez.ptr = new int[rez.size];
	for (int i = 0; i < rez.size; i++) {
		rez.ptr[i] = this->ptr[i] * a;
	}
	return rez;
}

DynamicArr DynamicArr::operator-(DynamicArr rez2)//123456 1234
{
	DynamicArr rez;
	if (this->size > rez2.size) 
	{
		rez.size = this->size - rez2.size;
		rez.ptr = new int[rez.size];
		for (int i = 0,j=0; i < this->size; i++) 
		{
			if (i >= rez2.size)
			{
				rez.ptr[j] = this->ptr[i];
				j++;
			}
		}
		return rez;

	}
	else if (this->size < rez2.size) //a.size < rez2.size
	{
		rez.size = rez2.size - this->size;
		rez.ptr = new int[rez.size];
		for (int i = 0, j = 0; i < rez2.size; i++)
		{
			if (i >= this->size)
			{
				rez.ptr[j] = rez2.ptr[i];
				j++;
			}
		}
		return rez;
	}
	else {
		cout << "the arrays have the same size" << endl;
		rez.size = 0;
		rez.ptr = nullptr;
		return rez;
	}
}

DynamicArr DynamicArr::operator++()
{
	DynamicArr rez;
	rez.size = this->size + 1;
	rez.ptr = new int[rez.size];
	for (int i = 0; i < rez.size; i++) {
		if (i == this->size) {
			rez.ptr[i] = 0;
		}
		else {
			rez.ptr[i] = this->ptr[i];
		}
		
	}
	return rez;
}

DynamicArr DynamicArr::operator--()
{
	DynamicArr rez;
	rez.size = this->size - 1;
	rez.ptr = new int[rez.size];
	for (int i = 0; i < rez.size; i++) {
		rez.ptr[i] = this->ptr[i];
	}
	return rez;
}

DynamicArr DynamicArr::operator+(DynamicArr b)
{
	DynamicArr rez;
	rez.size = this->size + b.size;
	rez.ptr = new int[rez.size];
	for (int i = 0, j = 0; i < rez.size; i++) {
		if (i >= this->size) {
			rez.ptr[i] = b.ptr[j];
			j++;
		}
		else {
			rez.ptr[i] = this->ptr[i];
		}
	}
	return rez;
}

int* DynamicArr::GetPointer()
{
	return ptr;
}
int DynamicArr::GetSize()
{
	return size;
}