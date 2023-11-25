#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    cin >> s;

    int sLen = s.length();

    for (int i = 0; i < sLen; i++)
    {
        // 소문자
        if (s[i] >= 97)
            s[i] -= 32;
        // 대문자
        else
            s[i] += 32;
    }

    cout << s;

    return 0;
}
