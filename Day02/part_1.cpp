#include "headers.h"


std::string part_1(const Input input) {
	int depth = 0;
	int hpos = 0;
	for (int i = 0; i < input.size(); i++) {
		char direct = input[i].first;
		char dist = input[i].second;

		if (direct == 'u') {
			depth -= dist;
		}
		else if (direct == 'd') {
			depth += dist;
		}
		else if (direct == 'f') {
			hpos += dist;
		}
		else {
			std::cout << "oops";
		}
	}
	int final = depth * hpos;
	return std::to_string(final);
}