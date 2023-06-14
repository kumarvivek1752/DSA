#include <iostream>

using namespace std;

void printarray(int *arr, int idx, int n)
{

    // base case
    if (idx == n)
    {
        return;
    }
    // self work
    cout << arr[idx] << endl;

    // assumed that
    printarray(arr, idx + 1, n);
}

int main()
{
    int n = 6;

    int array[] = {1, 2, 4, 5, 3, 4};
    printarray(array, 0, n);

    return 0;
}