#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& values, int target) { int left = 0, right = values.size() - 1; while (left <= right) { int middle = left + (right - left) / 2; if (values[middle] == target) return middle; if (values[middle] < target) left = middle + 1; else right = middle - 1; } return -1; }
int main() { cout << binarySearch({1, 3, 5, 7, 9}, 7); }
