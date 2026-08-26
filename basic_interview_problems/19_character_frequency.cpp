#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() { string text = "interview"; map<char, int> frequency; for (char c : text) ++frequency[c]; for (auto [c, count] : frequency) cout << c << ": " << count << '\n'; }
