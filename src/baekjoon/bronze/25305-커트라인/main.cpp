#include <iostream>

using namespace std;

void bubbleDescSort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
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

    int N, k;
    int arr[1000];

    cin >> N >> k;

    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        arr[i] = v;
    }

    bubbleDescSort(arr, N);

    cout << arr[k - 1];

    return 0;
}
