#ifndef READ_INPUT
#define READ_INPUT

#include <vector>
#include <fstream>
#include <algorithm>
#include "headers.h"

bool isOne(char c) {
	return c == '1';
}

Input read_input(std::string filename) {
	Input out;

	std::ifstream input(filename);
	std::string in;
	while (std::getline(input, in)) {
		std::vector<bool> mid;
		for (int i = 0; i < in.size(); i++) {
			mid.push_back(in[i] != '0');
		}

		out.push_back(mid);
	}

	return out;
}

#endif