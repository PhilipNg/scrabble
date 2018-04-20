#pragma once

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string nextLine() {
	string s;
	getline(cin, s);
	return s;
}

string toUpper(string s) {
	transform(s.begin(), s.end(), s.begin(), toupper);
	return s;
}
