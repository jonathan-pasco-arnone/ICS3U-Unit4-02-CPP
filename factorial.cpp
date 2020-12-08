// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines the factorial of a positive integer

#include <iostream>

int main() {
    // This function determines the factorial of a positive integer

    std::string numberStr;
    int number;
    int answer;

    std::cout << "" << std::endl;
    std::cout << "This program calculates the factorial of"
          " a positive integer" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberStr;
    std::cout << "" << std::endl;

    try {
        number = std::stoi(numberStr);
        if (number > 0) {
            do {
                answer = answer * number;
                number = number - 1;
            } while (number > 0);
            std::cout << "The factorial of " << numberStr <<
                  " is " << answer << std::endl;
        } else if (number == 0) {
            std::cout << "The factorial of 0 is 1" << std::endl;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
