// Simple program to tell you if a year is a leap year or not

#include <iostream>

bool is_leap (int yr) {
  if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  
  int year;
  bool leap;

  std::cout << "Enter the year:\n";

  std::cin >> year;

  if (year < 1000 or year > 9999) {
    std::cout << "Invalid year. Enter a 4 digit number.\n";
  } else if (is_leap(year)) {
    leap = true;
    std::cout << year << " is a leap year.\n";
  } else {
    leap = false;
    std::cout << year << " is not a leap year.\n";
  }
  
}
