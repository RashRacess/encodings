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
