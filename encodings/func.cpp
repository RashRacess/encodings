#include "func.h"

string MyCodeShifr(string str) {
	string ret;
	for (int i = 0; i < str.size(); i++)
	{
		ret += to_string(char(str[i]));
		ret += "-";
	}
	ret.erase(ret.end() - 1);
	return ret;
}

string MyCodeDeshifr(string str)
{
	string ret;
	string temp;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != '-') {
			temp += str[i];
		}
		else {
			int t = stoi(temp);
			char q = char(t);
			ret += q;
			temp = "";
		}
	}
	if (!temp.empty()) {
		int t = stoi(temp);
		char q = char(t);
		ret += q;
	}
	return ret;
}

string ShiftCezar(string str, int shift)
{
	string ret;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') 	ret += ' ';
		else if (isupper(str[i])) {
			ret += char(int(str[i] - 65 + shift) % 26 + 65);
		}

		else {
			ret += char(int(str[i] - 97 + shift) % 26 + 97);
		}
	}
	return ret;
}

string DeShiftCezar(string str, int shift)
{
	string ret;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') ret += ' ';
		else if (isupper(str[i])) {
			ret += char(int(str[i] - 65 + 26) % 26 + 65);
		}
		else {
			ret += char(int(str[i] - 97 + 26) % 26 + 97);
		}
	}
	return ret;
}


