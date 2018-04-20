#pragma once

class Tile {
public:
	Tile(char letter, int score) :
		letter(letter), score(score) {
	}

	char getLetter() const {
		return letter;
	}

	int getScore() const {
		return score;
	}

private:
	const char letter;
	const int score;
};