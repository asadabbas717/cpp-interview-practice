#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int lrg = arr[0];
    int slrg = arr[1];

    if (slrg > lrg) {
        int temp = lrg;
        lrg = slrg;
        slrg = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > lrg) {
            slrg = lrg;
            lrg = arr[i];
        }
        else if (arr[i] > slrg) {
            slrg = arr[i];
        }
    }

    cout << "Largest number is: " << lrg << endl;
    cout << "Second largest number is: " << slrg << endl;

    return 0;
}