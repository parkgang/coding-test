#include <iostream>

using namespace std;

int main()
{
    int arr[100], n, v, cnt = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int input;
        scanf("%d", &input);
        arr[i] = input;
    }

    scanf("%d", &v);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}