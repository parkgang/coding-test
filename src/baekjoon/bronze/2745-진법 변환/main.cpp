#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    int B;

    cin >> N >> B;

    int NLen = N.length() - 1;
    int digit = 0;
    long long sum = 0;
    for (int i = NLen; i >= 0; i--)
    {
        int num = N[i];

        // 진수 숫자로 추출
        if ('A' <= N[i] && N[i] <= 'Z')
        {
            num = N[i] - (int)'A' + 10;
        }
        else
        {
            num = N[i] - (int)'1' + 1;
        }

        sum += num * pow(B, digit);
        digit++;
    }

    cout << sum;

    return 0;
}
