// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on May 2022
// This program calculates area of triangle using functions

#include <iostream>

void Area(int height, int base) {
    // calculate area of triangle

    int area;

    area = height * base / 2;
    std::cout << "The area of the triangle is " << area << " cm²." << std::endl;
}

int main() {
    // this function calls the precedent function
    std::string heightInput;
    int heightInputInt;
    std::string baseInput;
    int baseInputInt;

    // input
    std::cout << "Enter the height of triangle in cm : ";
    std::cin >> heightInput;

    std::cout << "Enter the base of triangle in cm : ";
    std::cin >> baseInput;

    try {
        heightInputInt = std::stoi(heightInput);
        baseInputInt = std::stoi(baseInput);
        Area(heightInputInt, baseInputInt);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }
    std::cout << "\nDone." << std::endl;
}
