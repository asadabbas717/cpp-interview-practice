#include <iostream>
#include <vector>
using namespace std;
int singleNumber(const vector<int>& a){int answer=0;for(int x:a)answer^=x;return answer;}
int main(){cout<<singleNumber({4,1,2,1,2});}
