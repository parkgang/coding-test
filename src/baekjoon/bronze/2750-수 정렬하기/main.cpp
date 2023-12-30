#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v, int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<int> numbers;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        numbers.push_back(v);
    }

    bubbleSort(numbers, numbers.size());

    for (auto v : numbers)
        cout << v << "\n";

    return 0;
}
