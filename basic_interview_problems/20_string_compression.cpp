#include <iostream>
#include <string>
using namespace std;
string compress(const string& text) { string out; for (int i = 0; i < (int)text.size();) { int j = i; while (j < (int)text.size() && text[j] == text[i]) ++j; out += text[i] + to_string(j - i); i = j; } return out; }
int main() { cout << compress("aabcccccaaa"); }
