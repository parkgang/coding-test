#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  queue<int> cards;
  for (int i = 0; i < N; ++i) {
    cards.push(i + 1);
  }

  for (int i = 0; i < N - 1; ++i) {
    cards.pop();
    auto v = cards.front();
    cards.pop();
    cards.push(v);
  }

  cout << cards.front() << "\n";

  return 0;
}
