#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    set<int> uniqueNumbers;

    for (int i = 0; i < size; i++)
    {
        uniqueNumbers.insert(arr[i]);
    }

    for (int number : uniqueNumbers)
    {
        cout << number << " ";
    }

    return 0;
}