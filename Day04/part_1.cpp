#include "headers.h"
#include "iostream"

vi rolls;
vvvi tables;

std::string part_1(const Input input) {
	rolls = input.first;
	tables = input.second;

	std::vector<Board> boards;

	for (vvi table : tables) {
		Board board(table);
		boards.push_back(board);
	}

	for (int roll : rolls) {
		for (Board board : boards) {
			if (board.CheckTable(roll)) {
				return std::to_string(board.GetScore());
			}
		}
	}

	return "";
}