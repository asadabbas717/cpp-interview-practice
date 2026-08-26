#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() { vector<int> values = {1, 2, 3, 4, 5}; reverse(values.begin(), values.end()); for (int value : values) cout << value << ' '; }
