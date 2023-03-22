#include "headers.h"

std::string part_1(const Input input) {
	int increases = 0;
	for (int i = 1; i < input.size(); i++) {
		if (input[i - 1] < input[i]) {
			increases++;
		}
	}
	return std::to_string(increases);
}