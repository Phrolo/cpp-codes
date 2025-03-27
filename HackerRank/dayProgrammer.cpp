#include <iostream>

int main(){
  const int JULIAN = 0x45, GREGORIAN = 0x46, SPEC = 0x47;
  int year, calendar, febDays;
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

  febDays = 28;
  switch (calendar) {
    case JULIAN:
      if (year % 4 == 0) {
        febDays = 29;
      }
      break;
    case GREGORIAN:
      if (year % 400 == 0) {
        febDays = 29;
      }
      
      if ((year % 4 == 0) && (year % 100 != 0)) {
        febDays = 29;
      }
      break;
    case SPEC:
      febDays = 15;
      break;
    default:
      break;
  }

  std::cout << "Number of days in February: " << febDays << std::endl;
  return 0;
}
