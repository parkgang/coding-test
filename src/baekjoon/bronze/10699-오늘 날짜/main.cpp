#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t timer = time(NULL);
    struct tm *t = localtime(&timer);

    auto year = t->tm_year + 1900;
    auto month = t->tm_mon + 1;
    auto day = t->tm_mday;

    cout << year << "-" << month << "-" << day << endl;

    return 0;
}
