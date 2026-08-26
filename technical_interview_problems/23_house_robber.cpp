#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int rob(const vector<int>& a){int twoBack=0,oneBack=0;for(int x:a){int now=max(oneBack,twoBack+x);twoBack=oneBack;oneBack=now;}return oneBack;}
int main(){cout<<rob({2,7,9,3,1});}
