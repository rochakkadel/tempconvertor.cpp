#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits> 

void CelsiustoFahrenheit();
void FahrenheittoCelsius();

int main() {

  int choice;

  while (true) {

    std::cout << "Temperature Converter\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cout << "3. Quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "\n";

    switch (choice) {
    case 1:
      CelsiustoFahrenheit();
      break;

    case 2:
      FahrenheittoCelsius();
      break;
    }
    if (choice == 3) {
      std::cout << " Quitting the program\n";
      break;
    }
  }
}

void CelsiustoFahrenheit() {

  int input, calc, output;

  std::cout << "Enter Celsius: ";
  std::cin >> input;

  calc = input * 9 / 5;
  output = calc + 32;

  std::cout << input << "° Celsius is " << output << "° Fahrenheit\n";
}

void FahrenheittoCelsius() {

  int input, calc, output;

  std::cout << "Enter Fahrenheit: ";
  std::cin >> input;

  calc = input - 32;
  output = calc * 5 / 9;

  std::cout << input << "° Fahrenheit is " << output << "° Celsius\n";
}
