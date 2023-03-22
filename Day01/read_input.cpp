#include <vector>
#include <fstream>
#include "headers.h"

Input read_input(std::string filename) {
	Input out;

	std::ifstream input(filename);
	std::string in;
	while (std::getline(input, in)) {
		out.push_back(std::stoi(in));
	}

	return out;
}