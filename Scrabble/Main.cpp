#include <iostream>
#include <sstream>
#include <string>

#include "Bag.h"
#include "Board.h"
#include "Dictionary.h"
#include "Move.h"
#include "rack.h"

using namespace std;

int main() {
	Dictionary dict;

	Board b;
	Bag bag;
	Rack rack = Rack(bag.drawLetters(7));
	
	while (true) {
		b.printBoard();
		rack.printRack();
		cout << "\nAction [(W)ord placement; (E)xchange; (L)eave]: ";

		bool isValid = false;
		Move m;
		while (!isValid) {
			cout << "Enter start cell, direction (h-horizontal / v-vertical), letters : " << endl;
			m.prompt();
			bool inRack = rack.isValid(m.word);
			bool inDict = dict.isValid(m.word);

			isValid = rack.isValid(m.word) && dict.isValid(m.word);
		}

		rack.replaceLetters(m.word, bag.drawLetters(m.word.size()));
		b.addWord(m.word, m.x, m.y, m.isVertical);
		system("cls");
	}
}
