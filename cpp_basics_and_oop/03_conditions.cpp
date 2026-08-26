#include <iostream>
using namespace std;
int main() { int score = 82; if (score >= 90) cout << "A"; else if (score >= 80) cout << "B"; else cout << "Needs improvement"; cout << '\n'; switch (score / 10) { case 8: cout << "Good work\n"; break; default: cout << "Keep learning\n"; } }
