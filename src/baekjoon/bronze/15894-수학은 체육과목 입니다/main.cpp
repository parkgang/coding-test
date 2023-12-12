#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long n;

    cin >> n;

    if (n == 1)
    {
        cout << 4;
    }
    else
    {
        long 제일윗변 = 1;
        long 양옆변 = n * 2;
        long 제일하단변 = n;
        long 중간사이사이겹친변 = (n - 1);

        cout << 제일윗변 + 양옆변 + 제일하단변 + 중간사이사이겹친변;
    }

    return 0;
}
