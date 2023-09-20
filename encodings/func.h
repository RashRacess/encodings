#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


template<typename Type>
Type GetNumber(const char* S)
{
	Type a;
	cout << S << ": ";
	while (!(cin >> a))
	{
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Try again: ";
	}
	return a;
}

string MyCodeShifr(string str);

string MyCodeDeshifr(string str);

string ShiftCezar(string str, int shift);

string DeShiftCezar(string str, int shift);