#include <iostream>
#include <vector>
using namespace std;
int missingNumber(const vector<int>& nums) { int answer = nums.size(); for (int i = 0; i < (int)nums.size(); ++i) answer ^= i ^ nums[i]; return answer; }
int main() { cout << missingNumber({3, 0, 1}); }
