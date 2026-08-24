#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4, 7, 2, 9, 5};
    int target = 9;
    bool notfound=true;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        if(arr[i]==target){
            notfound=false;
            cout<<"Target found at index "<<i+1<<endl;
            break;
        }
    }
    if(notfound=true){
        cout<<"Target not found\n";
    }
    return 0;
}