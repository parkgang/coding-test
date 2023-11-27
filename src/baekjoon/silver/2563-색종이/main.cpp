#include <iostream>
#define MAX_X 100
#define MAX_Y 100

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int confetti[MAX_X][MAX_Y] = {
        0,
    };

    int cnt;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        int inputX, inputY;

        cin >> inputX >> inputY;

        // index는 0부터 시작하므로 입력 값 보다 -1 해서 처리하기
        int resX = inputX - 1;
        int resY = inputY - 1;
        int area = 10;

        // 입력 받은 대로 색종이 포게기
        for (int y = resX; y < resX + area; y++)
        {
            for (int x = resY; x < resY + area; x++)
            {
                confetti[y][x]++;
            }
        }
    }

    // 겹치는 부분 넓이 구하기
    int resArea = 0;
    for (int x = 0; x < MAX_X; x++)
    {
        for (int y = 0; y < MAX_Y; y++)
        {
            if (confetti[x][y])
                resArea++;
        }
    }

    cout << resArea;

    return 0;
}
