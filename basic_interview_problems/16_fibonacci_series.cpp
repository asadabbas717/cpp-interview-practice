#include <iostream>
using namespace std;
int main() { int count = 10, a = 0, b = 1; for (int i = 0; i < count; ++i) { cout << a << ' '; int next = a + b; a = b; b = next; } }
