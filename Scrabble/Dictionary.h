#pragma once

#include <fstream>
#include <set>
#include <string>

#include "IO.h"

using namespace std;

class Dictionary {
public:
	Dictionary() {
		ifstream fin("ospd.txt");
		string buffer;
		while (getline(fin, buffer)) {
			words.insert(toUpper(buffer));
		}
	}

	bool isValid(string word) {
		return words.count(word) == 1;
	}

private:
	set<string> words;
};