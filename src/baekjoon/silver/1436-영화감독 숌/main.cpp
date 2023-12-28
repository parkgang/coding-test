#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    int cnt = 0;
    int movieTitle = 665;
    while (cnt < N)
    {
        movieTitle++;

        string v = to_string(movieTitle);
        int vLen = v.length();
        int cnt6 = 0;
        for (int i = 0; i < vLen; i++)
        {
            if (v[i] == '6')
                cnt6++;
            else
                // 연속되지 않기 떄문에 초기화
                cnt6 = 0;

            if (cnt6 == 3)
            {
                cnt++;
                break;
            }
        }
    }

    cout << movieTitle << "\n";

    return 0;
}
