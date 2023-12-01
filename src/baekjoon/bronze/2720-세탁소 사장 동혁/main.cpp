#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[4] = {
        // quarter
        25,
        // dime
        10,
        // nickel
        5,
        // penny
        1,
    };

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        double C;
        cin >> C;

        for (int i = 0; i < 4; i++)
        {
            double c = C / a[i];

            cout << static_cast<int>(c) << " ";
            C -= static_cast<int>(c) * a[i];
        }
        cout << "\n";
    }

    return 0;
}
