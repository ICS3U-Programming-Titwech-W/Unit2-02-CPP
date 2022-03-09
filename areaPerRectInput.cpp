// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech
// Date: March 6,2022
// Calulates the area and perimeter of a 
// rectangle with user input

#include <iostream>

// declare variables
float length, width, area, perimeter;

int main() {
  // get input from user
  std::cout << "lets calculate the area and\n";
  std::cout << "perimeter of a rectangle.\n";
  std::cout << "Enter the length (m): ";
  std::cin >> length;
  std::cout << "Enter the width (m): ";
  std::cin >> width;

  // calculate area and perimeter
  area = length * width;
  perimeter = 2 * (length + width);

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = " << area <<"m^2.\n";
  std::cout << "Perimeter = " << perimeter << "m.\n";
}
