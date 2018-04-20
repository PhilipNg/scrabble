#pragma once

#include <sstream>
#include <string>

#include "IO.h"

using namespace std;

class Move
{
public:
	void prompt() {
		string buffer = toUpper(nextLine());
		stringstream ss(buffer);

		// horizontal
		char a;
		ss >> a;
		x = a - 'A';

		// vertical
		int b;
		ss >> b;
		y = b - 1;

		// orientation
		char c;
		ss >> c;
		isVertical = c == 'V';

		// word
		ss >> word;
	}

	int x, y;
	bool isVertical;
	string word;
};