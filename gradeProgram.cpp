// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Dec. 1, 2022
// This program gets the percentage associated with the grade from the user

#include <iostream>

// finds the percentage corresponding with the grade
int GetPercentage(std::string grade) {
    if (grade == "4+") {
        return 98;
    } else if (grade == "4") {
        return 91;
    } else if (grade == "4-") {
        return 83;
    } else if (grade == "3+") {
        return 78;
    } else if (grade == "3") {
        return 75;
    } else if (grade == "3-") {
        return 71;
    } else if (grade == "2+") {
        return 68;
    } else if (grade == "2") {
        return 65;
    } else if (grade == "2-") {
        return 61;
    } else if (grade == "1+") {
        return 58;
    } else if (grade == "1") {
        return 55;
    } else if (grade == "1-") {
        return 51;
    } else if (grade == "0") {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    // initialize string for user input
    std::string user_grade;

    // gets user input for the level grade
    std::cout << "Please enter a level grade: ";
    std::cin >> user_grade;

    // calls GetPercentage with the user input
    int percentage = GetPercentage(user_grade);

    // checks if the grade inputted was 0
    if (percentage == 0) {
        std::cout << "The percentage of 0 is less than 50%\n";

        // checks if the grade inputted was invalid
    } else if (percentage == -1) {
        std::cout << '"' << user_grade << '"' << " is not a valid grade\n";

    // displays the correct percentage
    } else {
        std::cout << "The percentage of " << user_grade
                  << " is " << percentage << "%\n";
    }
}
