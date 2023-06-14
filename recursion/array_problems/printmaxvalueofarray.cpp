#include <iostream>

using namespace std;

int maxvalue(int *arr, int idx, int n)
{

    if (n == 1 || idx == n)
    {
        return n;
    }

    return max(arr[idx], maxvalue(arr, idx + 1, n));
}

int main()

{
    int n = 5;
    int array[] = {1, 2, 14, 8, 33};

    cout << maxvalue(array, 0, n) << endl;

    return 0;
}