#include <iostream>
#include <set>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;

    cin >> M >> N;

    set<int> decimalCollection;
    for (int num = M; num <= N; num++)
    {
        set<int> 약수;
        for (int i = num; i >= 1; i--)
        {
            if (num % i == 0)
            {
                약수.insert(num / i);
            }
        }

        if (약수.size() == 2)
        {
            decimalCollection.insert(num);
        }
    }

    if (decimalCollection.size() == 0)
    {
        cout << -1 << "\n";

        return 0;
    }

    cout << accumulate(decimalCollection.begin(), decimalCollection.end(), 0) << "\n";
    cout << *decimalCollection.begin() << "\n";

    return 0;
}
