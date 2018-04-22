#pragma once
#include <string>
#include "Bag.h"
#include "Move.h"
using namespace std;

class Rack
{
public:
	
	Rack(string letters) {
		letters_ = letters;
	}

	void printRack()
	{
		cout << endl;
		printline();
		cout << "     on your rack:   ";

		for (int i = 0; i < 7; i++)
		{
			cout << "| ";
			cout << letters_[i];
			cout << " ";
		}
		cout << "|\n";

		printline();
		
	}

	bool isValid(string word) {
		string r(letters_);
		for (char c : word) {
			int pos = r.find(c);
			if (pos == -1) {
				return false;
			}
			r.erase(pos, 1);
		}
		return true;
	}

	void replaceLetters(string remove,string add)
	{
		
		for (int i =0; i<remove.size();i++)
		{
			int pos = letters_.find(remove.at(i));
		 
			letters_.at(pos) = add.at(i);

		}

	}
	


private:
	string letters_;

	void printline() {
		cout << "                     ";
		for (int i = 0; i <7; i++)
		{
			cout << "|---";

		}
		cout << "|"<< endl;
	}

};