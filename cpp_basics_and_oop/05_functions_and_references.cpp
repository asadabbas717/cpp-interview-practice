#include <iostream>
using namespace std;
int square(int value) { return value * value; }
void addBonus(int& score) { score += 5; }
int main() { int score = 10; addBonus(score); cout << square(score) << '\n'; }
