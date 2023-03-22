#ifndef READ_INPUT
#define READ_INPUT

#include <vector>
#include <fstream>
#include "headers.h"

Input read_input(std::string filename) {
	Input out;

	std::ifstream input(filename);
	std::string in;
	while (std::getline(input, in)) {
		out = 1;
	}

	return out;
}

#endif