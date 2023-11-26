#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string grade;

    cin >> grade;

    // A
    if (grade == "A+")
    {
        cout << "4.3";
    }
    else if (grade == "A0")
    {
        cout << "4.0";
    }
    else if (grade == "A-")
    {
        cout << "3.7";
    }
    // B
    else if (grade == "B+")
    {
        cout << "3.3";
    }
    else if (grade == "B0")
    {
        cout << "3.0";
    }
    else if (grade == "B-")
    {
        cout << "2.7";
    }
    // C
    else if (grade == "C+")
    {
        cout << "2.3";
    }
    else if (grade == "C0")
    {
        cout << "2.0";
    }
    else if (grade == "C-")
    {
        cout << "1.7";
    }
    // D
    else if (grade == "D+")
    {
        cout << "1.3";
    }
    else if (grade == "D0")
    {
        cout << "1.0";
    }
    else if (grade == "D-")
    {
        cout << "0.7";
    }
    // F
    else if (grade == "F")
    {
        cout << "0.0";
    }
    else if (grade == "A0")
    {
        cout << "4.0";
    }
    else if (grade == "A-")
    {
        cout << "3.7";
    }

    return 0;
}
