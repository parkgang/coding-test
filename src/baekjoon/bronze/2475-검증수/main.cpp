#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int _1, _2, _3, _4, _5;

    cin >> _1 >> _2 >> _3 >> _4 >> _5;

    auto res = (pow(_1, 2) + pow(_2, 2) + pow(_3, 2) + pow(_4, 2) + pow(_5, 2));
    cout << (int)res % 10;

    return 0;
}
