#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() { vector<int> values = {4, 1, 3}; sort(values.begin(), values.end()); map<string, int> score = {{"Ali", 90}, {"Sara", 95}}; cout << values.back() << " " << score["Sara"] << '\n'; }
