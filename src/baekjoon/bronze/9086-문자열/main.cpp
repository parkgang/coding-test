#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;

        cin >> s;

        cout << s[0] << s[s.length() - 1] << "\n";
    }

    return 0;
}
