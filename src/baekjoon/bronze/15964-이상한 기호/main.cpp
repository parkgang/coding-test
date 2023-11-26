#include <iostream>

using namespace std;

long at_formula(long a, long b)
{
    return (a + b) * (a - b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long a, b;

    cin >> a >> b;

    auto res = at_formula(a, b);
    cout << res;

    return 0;
}
