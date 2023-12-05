#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    set<int> mySet;
    for (int i = N; i >= 1; i--)
    {
        int quotient = N / i;
        if (N % i == 0 && !mySet.count(quotient))
        {
            mySet.insert(quotient);
            if (mySet.size() == K)
            {
                cout << quotient;

                return 0;
            }
        }
    }

    cout << 0;

    return 0;
}
