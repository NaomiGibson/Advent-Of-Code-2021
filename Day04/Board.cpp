#include "headers.h"

Board::Board(vvi tab) {
	table = tab;
}

bool Board::CheckNum(int row, int column, int roll) {
	if (table[row][column] == roll) {
		table[row][column] = -1;
		return true;
	}
	else {
		return false;
	}
}

bool Board::CheckTable(int roll) {
	for (int r = 0; r < table.size(); r++) {
		for (int c = 0; c < table[r].size(); c++) {
			if (CheckNum(r, c, roll)) {
				return CheckWin(r, c);
			}
		}
	}
	return false;
}

bool Board::CheckRow(int row) {
	for (int c = 0; c < table[row].size(); c++) {
		if (table[row][c] != -1) {
			return false;
		}			
	}
	return true;
}

bool Board::CheckColumn(int column) {
	for (int r = 0; r < table.size(); r++) {
		if (table[r][column] != -1) {
			return false;
		}
	}
	return true;
}

bool Board::CheckWin(int row, int column) {
	return CheckRow(row) || CheckColumn(column);
}

int Board::GetScore() {
	int score = 0;
	for (int r = 0; r < table.size(); r++) {
		for (int c = 0; c < table[r].size(); c++) {
			score += table[r][c];
		}
	}
	return score;
}