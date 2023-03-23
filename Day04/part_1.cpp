#include "headers.h"
#include "iostream"

vi rolls;
vvvi tables;

bool CheckNum(int TableNum, int row, int column, int roll) {
	int num = tables[TableNum][row][column];
	if (num == roll) {
		num = -1;
		return true;
	}
	else {
		return false;
	}
}

std::string part_1(const Input input) {
	rolls = input.first;
	tables = input.second;

	std::cout << std::to_string(tables[3][4][2]) << " "
		<< std::to_string(CheckNum(3, 4, 2, rolls[0])) << " "
		<< std::to_string(tables[3][4][2]) << " ";

	return "Part 1";
