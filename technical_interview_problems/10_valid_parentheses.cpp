#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;
bool valid(const string& s){unordered_map<char,char> close={{')','('},{']','['},{'}','{'}};stack<char> st;for(char c:s){if(!close.count(c))st.push(c);else if(st.empty()||st.top()!=close[c])return false;else st.pop();}return st.empty();}
int main(){cout<<boolalpha<<valid("{[()]}");}
