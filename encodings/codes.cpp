#include "func.h"

//различные методы кодирования и декодирования информации 

int main()
{
	//замена букв на цифры

	string s = MyCodeShifr("abcd");
	cout << endl << s << endl;
	cout << MyCodeDeshifr(s);
	
	system("cls");
	//шифр цкзаря
	int countOfShift = GetNumber<int>("enter shift");
	string hello = "Hello world";
	string str = ShiftCezar(hello, countOfShift);
	cout << endl << str << endl;
	cout << DeShiftCezar(hello, countOfShift);
	return 0;
}
