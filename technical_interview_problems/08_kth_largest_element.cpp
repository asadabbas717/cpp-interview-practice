#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int kthLargest(const vector<int>& a,int k){priority_queue<int,vector<int>,greater<int>> q;for(int x:a){q.push(x);if((int)q.size()>k)q.pop();}return q.top();}
int main(){cout<<kthLargest({3,2,1,5,6,4},2);}
