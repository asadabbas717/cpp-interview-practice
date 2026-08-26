#include <iostream>
using namespace std;
bool isLeapYear(int year) { return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0); }
int main() { cout << boolalpha << isLeapYear(2024); }
