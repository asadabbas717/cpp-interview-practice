#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
bool wordBreak(const string& s,const vector<string>& words){unordered_set<string> dict(words.begin(),words.end());vector<bool> dp(s.size()+1);dp[0]=true;for(int i=1;i<=(int)s.size();++i)for(int j=0;j<i;++j)if(dp[j]&&dict.count(s.substr(j,i-j))){dp[i]=true;break;}return dp.back();}
int main(){cout<<boolalpha<<wordBreak("leetcode",{"leet","code"});}
