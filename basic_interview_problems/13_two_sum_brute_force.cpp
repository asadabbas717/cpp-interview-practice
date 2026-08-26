#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "Not Found";

    return 0;
}