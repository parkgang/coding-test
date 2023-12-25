#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int sum = i;

        int v = i;
        while (v)
        {
            sum += v % 10;
            v /= 10;
        }

        if (N == sum)
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
