#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int minX, maxX, minY, maxY;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (i == 0 || x < minX)
            minX = x;
        if (i == 0 || x > maxX)
            maxX = x;
        if (i == 0 || y < minY)
            minY = y;
        if (i == 0 || y > maxY)
            maxY = y;
    }

    if (minX == maxY || minY == maxY)
        cout << 0;
    else
        cout << (maxX - minX) * (maxY - minY);

    return 0;
}
