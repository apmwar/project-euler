#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void printYearFormat(int year, int day) {
  cout << year << " was a ";
  switch(day) {
    case 0:
    cout << "Monday";
    break;
    case 1:
    cout << "Tuesday";
    break;
    case 2:
    cout << "Wednesday";
    break;
    case 3:
    cout << "Thursday";
    break;
    case 4:
    cout << "Friday";
    break;
    case 5:
    cout << "Saturday";
    break;
    case 6:
    cout << "Sunday";
    break;
  }
  cout << endl;
}

int main() {
  int year = 1901, day = 0, totaldays;
  int count = 0;
  printYearFormat(1900, 0);
  while(year < 2001) {
    if(((year % 4 == 0)&&(year % 100 != 0))||(year % 100 == 0 && year % 400 == 0)) { //leap year
      totaldays = 366;
    } else { totaldays = 365; }
    day = (day + (totaldays % 7)) % 7;
    if(day == 6w) { count++; }

    printYearFormat(year, day);

    year++;
  }
  cout << count;
  return 0;
}
