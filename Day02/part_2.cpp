#include "headers.h"

std::string part_2(const Input input) {
	int aim = 0;
	int depth = 0;
	int hpos = 0;
	for (int i = 0; i < input.size(); i++) {
		char direct = input[i].first;
		char dist = input[i].second;

		if (direct == 'u') {
			aim -= dist;
		}
		else if (direct == 'd') {
			aim += dist;
		}
		else if (direct == 'f') {
			hpos += dist;
			depth += aim * dist;
		}
		else {
			std::cout << "oops";
		}
	}
	int final = depth * hpos;
	return std::to_string(final);
}