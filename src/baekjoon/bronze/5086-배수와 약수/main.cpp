#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1)
    {
        int x, y;
        cin >> x >> y;
        if (!x && !y)
            break;

        if (y % x == 0)
            cout << "factor"
                 << "\n";
        else if (x % y == 0)
            cout << "multiple"
                 << "\n";
        else
            cout << "neither"
                 << "\n";
    }

    return 0;
}
