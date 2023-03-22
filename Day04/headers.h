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

#endif