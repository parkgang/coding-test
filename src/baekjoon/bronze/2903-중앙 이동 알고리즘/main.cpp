#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, width = 2;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        width += width - 1;
    }

    cout << width * width;

    return 0;
}
