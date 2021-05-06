// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 06 May 2021
// This program tells the number of days in each month of the year

// Inspired from the website: https://www.faceprep.in/c/program-to-find-
//   the-number-of-days-in-a-given-month-of-a-given-year/
#include <iostream>

int main() {
    // This function tells the number of days in each month of the year

    int month;
    int year;

    // input
    std::cout << "Enter the month number (1 - 12): ";
    std::cin >> month;
    std::cout << "Enter the year: ";
    std::cin >> year;

    // process
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
    month == 10 || month == 12) {
        // output
        std::cout << "" << std::endl;
        std::cout << "This month has 31 days.";

    // process
}   else if ((month == 2) && ((year % 400 == 0) ||
    (year % 4 == 0 && year % 100 != 0))) {
        // output
        std::cout << "" << std::endl;
        std::cout << "This month has 29 days this year!";

    // process
}   else if (month == 2) {
        // output
        std::cout << "" << std::endl;
        std::cout << "This month has 28 days this year!";

    // process
}   else {
        // output
        std::cout << "" << std::endl;
        std::cout << "This month has 30 days.";}
}
