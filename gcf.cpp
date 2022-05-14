// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, calculating the GCF of two numbers

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // This function calculates GCF
    std::string numberAString;
    std::string numberBString;
    int numberAInteger;
    int numberBInteger;
    int numberA;
    int numberB;
    int absolute;
    int greatestCommonFactor;
    float numberAFloat;
    float numberBFloat;

    // input
    std::cout << "This function calculates the GCF of two numbers,"
    << " and it only accepts integers." << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> numberAString;
    std::cout << "Enter the second number: ";
    std::cin >> numberBString;

    // process
    std::cout << "" << std::endl;
    try {
        numberAInteger = std::stoi(numberAString);
        numberBInteger = std::stoi(numberBString);
        numberAFloat = std::stof(numberAString);
        numberBFloat = std::stof(numberBString);
        if (numberAInteger == numberAFloat) {
            numberA = abs(numberAInteger);
            numberB = abs(numberBInteger);
            while (numberA - numberB != 0) {
                absolute = abs(numberA - numberB);
                if (numberA > numberB) {
                    numberA = absolute;
                } else {
                    numberB = absolute;
                }
            }
            greatestCommonFactor = numberA;
            std::cout << "The Greatest Common Factor of " << numberAInteger
            << " and " << numberBInteger << " is " << greatestCommonFactor
            << "." << std::endl;
        } else {
            std::cout << "Please put in an integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
