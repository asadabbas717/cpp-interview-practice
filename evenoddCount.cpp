#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int even=0;
    int odd=0;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even found = "<<even<<endl<<"Odd found = "<<odd<<endl;
    return 0;
}