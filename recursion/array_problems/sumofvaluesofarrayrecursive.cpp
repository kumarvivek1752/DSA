#include <iostream>

using namespace std;

int sumofarray(int *arr, int idx, int n)
{

    // base case
    if (idx == n - 1)
        return arr[idx];

    int result = arr[idx] + sumofarray(arr, idx + 1, n);

    return result;
}

int main()
{

    int n = 6;
    int array[] = {1, 1, 1, 1, 1, 1};

    cout << sumofarray(array, 0, n) << endl;

    return 0;
}