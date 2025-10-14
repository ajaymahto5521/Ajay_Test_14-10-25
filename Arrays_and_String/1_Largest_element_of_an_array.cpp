#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }

    cout << "Maximum element is: " << mx;
    return 0;
}
