#include <iostream>
using namespace std;

void subsets(int arr[], int n, int index, int out[], int outSize)
{
    // base case
    if (index == n)
    {
        cout << "{ ";
        for (int i = 0; i < outSize; i++)
            cout << out[i] << " ";
        cout << "}" << endl;
        return;
    }

    // Exclude current element
    subsets(arr, n, index + 1, out, outSize);

    // Include current element
    out[outSize] = arr[index];
    subsets(arr, n, index + 1, out, outSize + 1);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    int out[10];   // temporary array

    subsets(arr, n, 0, out, 0);

    return 0;
}
