#include <iostream>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("%d\n", 1);
        return 0;
    }

    int acc = 1;
    for (int i = 1; i <= n; i++)
    {
        acc *= i;
    }
    printf("%d\n", acc);

    return 0;
}