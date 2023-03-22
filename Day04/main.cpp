#include <iostream>

#include "headers.h"

int main()
{
    // On creating a new day you will have to change the Input type in headers.h
    Input input = read_input("input.txt");
    std::cout << part_1(input) << std::endl << part_2(input);
}