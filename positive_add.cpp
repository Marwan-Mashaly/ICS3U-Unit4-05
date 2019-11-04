// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program adds all positive numbers from the loop

#include <iostream>
#include <string>

int main() {
    int counter = 0;
    int totalNumber = 0;
    std::string number;
    int numCheck;
    std::string numberAdd;
    int numberCheck2;

    // Input
    std::cout << "Enter a number for how many times to loop: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process & output
    try {
        numCheck = std::stoi(number);
    }catch (std::invalid_argument) {
        std::cout << "Invalid number";
    }
    while (counter < numCheck) {
        std::cout << "Enter a positive or negative number: ";
        std::cin >> numberAdd;
        std::cout << "" << std::endl;
        try {
            numberCheck2 = std::stoi(numberAdd);
        }catch (std::invalid_argument) {
            std::cout << "Invalid number";
        }
        counter = counter + 1;
        if (numberCheck2 <= 0) {
            continue;
        } else {
            numberCheck2 >= 0;
            totalNumber = numberCheck2 + totalNumber;
        }
    std::cout << "Sum of all posiive numbers =" << totalNumber <<std::endl;
    std::cout << "" << std::endl;
    }
}
