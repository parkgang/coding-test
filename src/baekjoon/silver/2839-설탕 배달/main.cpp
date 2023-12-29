#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    int max5kg = N / 5;

    for (int cnt5kg = max5kg; cnt5kg >= 0; cnt5kg--)
    {
        int _5kg_제외_남은무게 = N - (5 * cnt5kg);
        int max3kg = _5kg_제외_남은무게 / 3;

        for (int cnt3kg = max3kg; cnt3kg >= 0; cnt3kg--)
        {
            int 남은무게 = _5kg_제외_남은무게 - (3 * cnt3kg);
            if (남은무게 == 0)
            {
                cout << cnt5kg + cnt3kg;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}
