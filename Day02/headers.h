#ifndef HEADERS
#define HEADERS

#include <vector>
#include <string>
#include <iostream>

// CHANGE THIS FIRST LINE FOR EACH DAY
typedef std::vector<std::pair <char, int>> Input;

Input read_input(const std::string);
std::string part_1(Input);
std::string part_2(Input);

#endif