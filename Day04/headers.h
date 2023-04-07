#ifndef HEADERS
#define HEADERS

#include <vector>
#include <string>

// CHANGE THIS FIRST LINE FOR EACH DAY
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::vector<vvi> vvvi; 
typedef std::pair <vi, vvvi> Input;

Input read_input(const std::string);
std::string part_1(Input);
std::string part_2(Input);

struct Board {
	vvi table;

	Board(vvi tab);

	bool CheckNum(int row, int column, int roll);
	bool CheckTable(int roll);
	bool CheckRow(int row);
	bool CheckColumn(int column);
	bool CheckWin(int row, int column);
	int GetScore();

};

#endif