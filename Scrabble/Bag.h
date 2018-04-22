#pragma once

#include <algorithm>
#include <random>
#include <vector>


using namespace std;

class Bag
{
public:
	Bag()
	{
		letters.append(12, 'E');
		letters.append(9, 'A');
		letters.append(9, 'I');
		letters.append(8, 'O');
		letters.append(6, 'N');
		letters.append(6, 'R');
		letters.append(6, 'T');
		letters.append(4, 'L');
		letters.append(4, 'S');
		letters.append(4, 'U');
		letters.append(4, 'D');
		letters.append(3, 'G');
		letters.append(2, 'B');
		letters.append(2, 'C');
		letters.append(2, 'M');
		letters.append(2, 'P');
		letters.append(2, 'F');
		letters.append(2, 'H');
		letters.append(2, 'V');
		letters.append(2, 'W');
		letters.append(2, 'Y');
		letters.append(1, 'K');
		letters.append(1, 'J');
		letters.append(1, 'X');
		letters.append(1, 'Q');
		letters.append(1, 'Z');
		letters.append(2, ' ');

	}

	string drawLetters(int numberOfLetters)
	{
		shuffle(letters.begin(), letters.end(), engine);
		string selection = letters.substr(letters.size() - numberOfLetters);
		letters.erase(letters.size() - numberOfLetters);
		return selection;
	}

private:
	string letters;
	mt19937 engine;
};