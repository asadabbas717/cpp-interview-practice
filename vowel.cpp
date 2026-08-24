#include <iostream>
#include<string>
using namespace std;

int main() 
{
    
    string s;
    cout<<"Enter any word regardless case sensitive"<<endl;
    cin>>s;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'||s[i]=='U'){
            count++;
        }
    }
    if(count==0){
        cout<<"No vowels found"<<endl;
    }
    else{
        cout<<"There are "<<count<<" Vowels found in word"<<endl;
    }

    return 0;
}