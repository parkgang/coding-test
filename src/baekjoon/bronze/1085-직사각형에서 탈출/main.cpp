#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int _1 = y;
    int _2 = h - y;
    int _3 = x;
    int _4 = w - x;

    cout << min({_1, _2, _3, _4});

    return 0;
}
