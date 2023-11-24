#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int a[100][100], b[100][100];

    scanf("%d %d", &n, &m);

    for (int input = 0; input < 2; input++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int v;
                scanf("%d", &v);

                if (input == 0)
                    a[i][j] = v;
                b[i][j] = v;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}