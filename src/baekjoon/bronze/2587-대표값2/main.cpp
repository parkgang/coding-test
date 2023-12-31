#include <iostream>
#include <numeric>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5];
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 5; i++)
    {
        int v;
        cin >> v;
        arr[i] = v;
    }

    bubbleSort(arr, arrLen);
    int sum = accumulate(arr, arr + arrLen, 0);

    cout << sum / arrLen << "\n";
    cout << arr[2] << "\n";

    return 0;
}
