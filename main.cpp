// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// Do while loop

#include <iostream>

int main() {
    // main function for creating do while loop
    // define variables
    int number;
    int counter = 0;
    int product_num = 1;

    // input
    std::cout << "Enter a positive integer: " << std::endl;
    std::cin >> number;

    // process/output
    if (number <= 0) {
        if (number == 0) {
            std::cout << "0! = 1" << std::endl;
        } else {
            std::cout << "Input must be a positive integer" << std::endl;
        }
    } else {
        do {
            counter++;
            product_num *= counter;
        } while (counter < number);
        std::cout << number << "! = " << product_num << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
