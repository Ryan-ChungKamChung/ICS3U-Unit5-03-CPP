// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in January 2021
// This program converts grades to percents

#include <iostream>
#include <string>


int input_to_percent(std::string grade_string) {
    // Function calculates area and prints it

    int percent;
    char grade;

    if (grade_string == "R") {
        grade = 'A';
    } else if (grade_string == "1-") {
        grade = 'B';
    } else if (grade_string == "1") {
        grade = 'C';
    } else if (grade_string == "1+") {
        grade = 'D';
    } else if (grade_string == "2-") {
        grade = 'E';
    } else if (grade_string == "2") {
        grade = 'F';
    } else if (grade_string == "2+") {
        grade = 'G';
    } else if (grade_string == "3-") {
        grade = 'H';
    } else if (grade_string == "3") {
        grade = 'I';
    } else if (grade_string == "3+") {
        grade = 'J';
    } else if (grade_string == "4-") {
        grade = 'K';
    } else if (grade_string == "4") {
        grade = 'L';
    } else if (grade_string == "4+") {
        grade = 'M';
    } else {
        grade = 'N';
    }

    switch (grade) {
        case 'A' :
            percent = 30;
            break;
        case 'B' :
            percent = 51;
            break;
        case 'C' :
            percent = 55;
            break;
        case 'D' :
            percent = 58;
            break;
        case 'E' :
            percent = 61;
            break;
        case 'F' :
            percent = 65;
            break;
        case 'G' :
            percent = 68;
            break;
        case 'H' :
            percent = 71;
            break;
        case 'I' :
            percent = 75;
            break;
        case 'J' :
            percent = 78;
            break;
        case 'K' :
            percent = 83;
            break;
        case 'L' :
            percent = 90;
            break;
        case 'M' :
            percent = 97;
            break;
        default :
            percent = -1;
            break;
    }

        return percent;
}


int main() {
    // Takes user input, passes it to functions and calls them

    std::string grade_string;
    int percent;

    while (true) {
        // Input
        std::cout << "Enter grade: ";
        std::cin >> grade_string;

        // Process
        percent = input_to_percent(grade_string);

        if (percent == -1) {
            std::cout << "Invalid input" << std::endl;
            std::cout << " " << std::endl;
            continue;
        }

        break;
    }
    
    // Output
    std::cout << "Your grade in percent is: " << percent << "%"<< std::endl;
}
