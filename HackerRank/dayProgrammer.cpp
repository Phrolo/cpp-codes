#include <iostream>

int main(){
  const int JULIAN = 0x45, GREGORIAN = 0x46, SPEC = 0x47;
  int year, calendar;
  int daysOfMonths[12];

  std::cout << "Enter a year: ";
  std::cin >> year;

  if ((1700 <= year) && (year <= 1917)) {
    calendar = JULIAN;
    //std::cout << "Julian" << std::endl;
  }

  if ((1919 <= year) && (year <= 2700)) {
    calendar = GREGORIAN;
    //std::cout << "Gregorian" << std::endl;
  }

  if (year == 1918) {
    calendar = SPEC;
    //std::cout << "Special Case" << std::endl;
  }

  return 0;
}
