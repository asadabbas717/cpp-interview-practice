#include <climits>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string minWindow(const string& s,const string& t){vector<int> need(128);for(char c:t)++need[c];int missing=t.size(),left=0,start=0,len=INT_MAX;for(int right=0;right<(int)s.size();++right){if(need[s[right]]-- > 0)--missing;while(!missing){if(right-left+1<len)start=left,len=right-left+1;if(++need[s[left++]]>0)++missing;}}return len==INT_MAX?"":s.substr(start,len);}
int main(){cout<<minWindow("ADOBECODEBANC","ABC");}
