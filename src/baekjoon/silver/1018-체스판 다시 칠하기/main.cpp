#include <iostream>
#define N_MAX 50
#define M_MAX 50

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    char board[N_MAX][M_MAX] = {
        0,
    };
    int reColoring[2][N_MAX][M_MAX] = {
        0,
    };
    char mask[2][2] = {
        {'B', 'W'},
        {'W', 'B'},
    };

    cin >> N >> M;
    // 위에서 cin으로 개행된 문자가 getline으로 인식하지 않도록: 해당 작업을 하지 않으면 getline에서 첫번째 라인이 빈 값으로 들어옵니다.
    cin.ignore();

    // 입력된 값 체크 보드에 할당
    for (int y = 0; y < N; y++)
    {
        string line;
        getline(cin, line);
        for (int x = 0; x < line.length(); x++)
        {
            board[y][x] = line[x];
        }
    }

    // 색칠해야하는 부분 마킹
    for (int i = 0; i < 2; i++)
    {
        for (int y = 0; y < N; y++)
        {
            for (int x = 0; x < M; x++)
            {
                if (board[y][x] != mask[(y + i) % 2][x % 2])
                {
                    reColoring[i][y][x] = 1;
                }
            }
        }
    }

    // 체스판이 8*8 이니까 최대로 채울 수 있는 숫자로 할당함
    int minColoringVal = 8 * 8;
    for (int i = 0; i < 2; i++)
    {
        for (int y = 0; y <= N - 8; y++)
        {
            for (int x = 0; x <= M - 8; x++)
            {
                int cnt = 0;
                for (int posY = 0; posY < 8; posY++)
                {
                    for (int posX = 0; posX < 8; posX++)
                    {
                        if (reColoring[i][y + posY][x + posX])
                        {
                            cnt++;
                        }
                    }
                }

                if (minColoringVal > cnt)
                    minColoringVal = cnt;
            }
        }
    }

    cout << minColoringVal;

    return 0;
}
