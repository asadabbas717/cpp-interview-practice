#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() { string text = "cpp basics"; text[0] = 'C'; transform(text.begin(), text.end(), text.begin(), ::toupper); cout << text << " (" << text.size() << ")\n"; }
