#include <iostream>
#include <vector>
#include <set>

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

    int N, M;

    cin >> N >> M;

    vector<int> card;

    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        card.push_back(v);
    }

    bubbleSort(card, card.size());

    set<int> answer;

    for (int i = card.size() - 1; i >= 2; i--)
        for (int j = i - 1; j >= 1; j--)
            for (int k = j - 1; k >= 0; k--)
            {
                int sum = card[i] + card[j] + card[k];
                if (sum <= M)
                {
                    answer.insert(sum);
                }
            }

    cout << *answer.rbegin() << "\n";

    return 0;
}
