#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Array of integers
    int arr[] = {1, 73, 4, 2, 54, 7};

    // Sort the array in ascending order
    sort(arr, arr + 6); // Sort the entire array
    cout << "Array sorted in ascending order:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    // Sort the array in descending order using greater<int>()
    sort(arr, arr + 6, greater<int>());
    cout << "Array sorted in descending order:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
