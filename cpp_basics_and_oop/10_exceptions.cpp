#include <iostream>
#include <stdexcept>
using namespace std;
double divide(double a, double b) { if (b == 0) throw invalid_argument("division by zero"); return a / b; }
int main() { try { cout << divide(10, 2) << '\n'; } catch (const exception& error) { cerr << error.what() << '\n'; } }
