#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int coinChange(const vector<int>& coins,int amount){vector<int> dp(amount+1,amount+1);dp[0]=0;for(int x=1;x<=amount;++x)for(int c:coins)if(c<=x)dp[x]=min(dp[x],dp[x-c]+1);return dp[amount]>amount?-1:dp[amount];}
int main(){cout<<coinChange({1,2,5},11);}
