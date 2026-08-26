#include <iostream>
#include <vector>
using namespace std;
int main() { int fixed[] = {1, 2, 3}; vector<int> dynamic = {4, 5}; dynamic.push_back(6); cout << fixed[0] << " and "; for (int value : dynamic) cout << value << ' '; }
