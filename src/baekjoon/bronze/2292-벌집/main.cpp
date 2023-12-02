#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    if (N == 1)
    {
        cout << 1;
        return 0;
    }

    int cnt = 1;
    int st = 2;
    while (1)
    {
        int offset = 6 * cnt - 1;
        int en = st + offset;

        if (st <= N && N <= en)
            break;
        st = en + 1;
        cnt++;
    }

    cout << cnt + 1;

    return 0;
}
