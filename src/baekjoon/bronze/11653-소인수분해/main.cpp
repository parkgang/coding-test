#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int 소수 = 2; N != 1; 소수++)
    {
        while (N % 소수 == 0)
        {
            cout << 소수 << "\n";
            N /= 소수;
        }
    }

    return 0;
}
