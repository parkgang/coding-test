#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int arr[10000] = {
        0,
    };

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        arr[v - 1]++;
    }

    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}
