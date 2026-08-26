#include <iostream>
#include<string>
using namespace std;

int main() 
{
    string s;
    bool isPalindrome = true;
    int left = 0;
    cout<<"Enter a word to check if it is palandrom or not \n";
    cin>>s;
    int right = s.length() -1 ;
    while(left<right){
        if(s[left]!=s[right]){
            isPalindrome = false;
            break;
        }
        left ++;
        right --;
    }
    if(!isPalindrome){
        cout<<"Word is not palindrome\n";
    }
    else{
        cout<<"Word is palindrome\n";
    }

    return 0;
}