#include "DynamicArr.h"
#include <iostream>
using namespace std;

int main() {
	DynamicArr a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArr b = a; // copy constructor
	b.Output();
	cout << endl;

	cout << "Increase the number of elements by 10" << endl;
	DynamicArr rez1 = a + 10;
	rez1.Output();
	a.Output();
	cout << endl;

	DynamicArr rez2 = a - 2;
	cout << "Remove the last 2 elements if size >2" << endl;
	rez2.Output();
	cout << endl;

	DynamicArr rez3 = a * 2;
	cout << "multiply the value of each array element by 2 and return a new array" << endl;
	rez3.Output();
	cout << endl;

	DynamicArr rez4 = a - rez2;
	cout << "array difference" << endl;
	rez4.Output();
	cout << endl;

	DynamicArr rez5 = a + b;
	cout << "array concatenation" << endl;
	rez5.Output();
	cout << endl;

	DynamicArr rez6 = ++a;
	cout << "increase the number of elements by 1 (value 0)" << endl;
	rez6.Output();
	cout << endl;

	DynamicArr rez7 = --a;
	cout << "the number of elements decreases by 1, remove the last element" << endl;
	rez7.Output();
	cout << endl;

	/*
	реилизовать следующие перегрузки:

	+ DynamicArr rez = a+10 ; // увеличиваем кол-во элементов на 10 
	+ rez = a-2; // удаляем последние 2 элемента, если размер >2
	+ rez = a*2;// значение каждого элемента массива умножаем на 2, возвращаем новый массив!

	+ rez = a-b; // разность массивов
	+ rez=a+b;  // конкатенация массивов
	+ ++rez;  // увеличиваем количество элементов на 1(значение 0).
	+ --rez;  // уменьшается количество элементов на 1, удаляем последний элемент
	*/

}