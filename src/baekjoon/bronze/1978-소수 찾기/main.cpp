#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        set<int> mySet;
        for (int j = v; j >= 1; j--)
        {
            if (v % j == 0)
            {
                mySet.insert(v / j);
            }
        }

        if (mySet.size() == 2)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
