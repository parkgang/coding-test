#include <iostream>

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

    while (1)
    {
        int len = 3;
        int arr[len];

        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        {
            return 0;
        }

        ascBubbleSort(arr, len);

        if (arr[2] >= arr[0] + arr[1])
        {
            cout << "Invalid\n";
            continue;
        }

        // 세 변의 길이가 모두 같은 경우
        if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            cout << "Equilateral\n";
        }
        // 세 변의 길이가 모두 다른 경우
        else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
        {
            cout << "Scalene\n";
        }
        // 두 변의 길이만 같은 경우
        else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
        {
            cout << "Isosceles\n";
        }
        else
        {
            cout << "Exception";
        }
    }

    return 0;
}
