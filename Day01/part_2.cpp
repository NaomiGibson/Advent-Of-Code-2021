#include "headers.h"

std::string part_2(const Input input) {
	int increases = 0;
	for (int i = 3; i < input.size(); i++) {
		if (input[i - 3] < input[i]) {
			increases++;
		}
	}
	return std::to_string(increases);
}

// a + b + c < b + c + d 