#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        arr[i] = v;
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}
