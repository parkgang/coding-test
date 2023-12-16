#include <iostream>
#include <numeric>

using namespace std;

void ascBubbleSort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    ascBubbleSort(arr, 3);

    while (1)
    {
        if (arr[2] < arr[0] + arr[1])
        {
            break;
        }
        arr[2]--;
    }

    cout << accumulate(arr, arr + 3, 0);

    return 0;
}
