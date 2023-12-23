#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a0, a1, c, n0;

    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;

    int fn = a1 * n0 + a0;
    int gn = c * n0;
    (fn <= gn) && (a1 <= c) ? cout << 1 : cout << 0;

    return 0;
}
