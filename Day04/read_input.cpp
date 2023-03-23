#ifndef READ_INPUT
#define READ_INPUT

#include <vector>
#include <fstream>
#include "headers.h"

vi SplitIntsBy(std::string ints, char separator) {
	vi SplitValues;
	std::string num;
	for (int i = 0; i <= ints.length(); i++) { // for each character
		if (ints[i] == separator || i == ints.length()) {
			if (num != "") {
				SplitValues.push_back(std::stoi(num));
				num = "";
			}
		}
		else {
			num.push_back(ints[i]);
		}
	}
	std::cout << std::endl;
	return SplitValues;
}

Input read_input(std::string filename) {
	Input out;

	std::ifstream input(filename);
	std::string in;

	std::getline(input, in);
	out.first = SplitIntsBy(in, ','); //ASSIGNING FIRST VALUE IN PAIR

	vvi STable; // single table being built
	vvvi ATables; // all tables
	while (std::getline(input, in)) {
		if (in == "") {
			ATables.push_back(STable);
			STable.clear();
		}
		else {
			STable.push_back(SplitIntsBy(in, ' '));
		}
	} 
	out.second = ATables;
	return out;
}

#endif
