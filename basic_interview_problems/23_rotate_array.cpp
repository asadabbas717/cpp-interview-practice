#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void rotateRight(vector<int>& values, int k) { k %= values.size(); reverse(values.begin(), values.end()); reverse(values.begin(), values.begin() + k); reverse(values.begin() + k, values.end()); }
int main() { vector<int> values = {1, 2, 3, 4, 5, 6, 7}; rotateRight(values, 3); for (int value : values) cout << value << ' '; }
