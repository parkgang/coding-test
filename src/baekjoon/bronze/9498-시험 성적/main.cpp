#include <iostream>

using namespace std;

int main()
{
    int v;

    cin >> v;

    if (v >= 90)
        cout << "A" << endl;
    else if (v >= 80)
        cout << "B" << endl;
    else if (v >= 70)
        cout << "C" << endl;
    else if (v >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    return 0;
}