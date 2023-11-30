#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, B;
    vector<int> result;

    cin >> N >> B;

    while (1)
    {
        int digitShare = N / B;
        int digitRemain = N % B;

        result.push_back(digitRemain);

        if (digitShare == 0)
        {
            break;
        }

        N = digitShare;
    }

    for (int i = result.size() - 1; i >= 0; i--)
    {
        if (result[i] >= 10)
        {
            cout << (char)(result[i] - 10 + (int)'A');
        }
        else
        {
            cout << result[i];
        }
    }

    return 0;
}
