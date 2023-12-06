#include <iostream>
#include <set>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1)
    {
        int n;

        cin >> n;

        if (n == -1)
        {
            break;
        }

        set<int> mySet;
        for (int i = n; i >= 2; i--)
        {
            if (n % i == 0)
            {
                mySet.insert(n / i);
            }
        }

        auto sum = accumulate(mySet.begin(), mySet.end(), 0);

        if (sum == n)
        {
            cout << n << " = ";
            for (auto v = mySet.begin(); v != mySet.end(); v++)
            {

                cout << *v;
                if (next(v) == mySet.end())
                {
                    cout << "\n";
                }
                else
                {
                    cout << " + ";
                }
            }
        }
        else
        {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}
