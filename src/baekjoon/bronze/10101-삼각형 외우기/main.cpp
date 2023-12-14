#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int input[3] = {
        0,
    };

    cin >> input[0] >> input[1] >> input[2];

    auto sum = input[0] + input[1] + input[2];

    if (sum == 180)
    {
        if (input[0] == 60 && input[1] == 60 && input[2] == 60)
            cout << "Equilateral";
        else if (input[0] == input[1] || input[1] == input[2] || input[0] == input[2])
            cout << "Isosceles";
        else
            cout << "Scalene";
    }
    else
    {
        cout << "Error";
    }

    return 0;
}
