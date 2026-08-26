#include <cmath>
#include <iostream>
using namespace std;
bool isArmstrong(int number) { int digits = to_string(number).size(), sum = 0, value = number; do { int digit = value % 10; sum += (int)pow(digit, digits); value /= 10; } while (value); return sum == number; }
int main() { cout << boolalpha << isArmstrong(153); }
