#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    cin >> X;

    int diagonal = 1;

    // 해당 반복문이 탈출되면 몇번째 대각선인지, 대각선에서 몇번째 네모칸에 있는지 알 수 있음
    while (X > diagonal)
    {
        X -= diagonal;
        diagonal++;
    }
    // 이 시점에서 X는 멈춘 대각선에서 몇번째 네모칸에 있는지 정보를 나타내고 있음

    if (diagonal % 2 == 0)
    {
        cout << X
             << "/"
             << diagonal - X + 1;
    }
    else
    {
        cout << diagonal - X + 1
             << "/"
             << X;
    }

    return 0;
}
