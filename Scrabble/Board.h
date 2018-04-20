#pragma once

#include <iostream>
#include <string>
#include <utility>

#include "Tile.h"

using namespace std;

class Board {
public:
	Board() {
		for (int i = 0; i < 15; ++i) {
			for (int j = 0; j < 15; ++j) {
				tiles[i][j] = ' ';
			}
		}
	}
	void addWord(string word, int x, int y, bool isVertical)
	{
		for (int i = 0; i < word.size(); i++) {

			if (isVertical) 
				tiles[y+i][x] = word.at(i);
			
			else
			tiles[y][x+i] = word.at(i);

		}
	}


	string getWord(pair<int, int> pos, bool isDown) {
		return "AIR";
	}

	void printBoard() {
		printHeader();
		printLine();
		for (int i = 0; i < 15; i++) {
			int row = i + 1;
			cout << " ";
			if (row < 10) {
				cout << "0";
			}
			cout << row << " ";
			for (int j = 0; j < 15; j++) {
				cout << "| ";
				cout << tiles[i][j];
				cout << " ";
			}
			cout << "| ";
			if (row < 10) {
				cout << "0";
			}
			cout << row << endl;
			printLine();
		}
		printHeader();
	}


private:
	void printHeader() {
		cout << "    ";
		for (char c = 'A'; c < 'P'; ++c) {
			cout << "  " << c << " ";
		}
		cout << endl;
	}

	void printLine() {
		cout << "    ";
		for (int i = 0; i < 15; i++) {
			cout << "|---";
		}
		cout << "|" << endl;

	}
	void addTile(char letter, pair<int, int> pos) {
		tiles[pos.second][pos.first] = letter;
	}
	char tiles[15][15];
};
