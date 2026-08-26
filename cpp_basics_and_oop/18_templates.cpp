#include <iostream>
#include <string>
using namespace std;
template <typename T> const T& larger(const T& a, const T& b) { return a < b ? b : a; }
int main() { cout << larger(4, 9) << '\n' << larger(string("cat"), string("dog")) << '\n'; }
