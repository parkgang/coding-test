#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  unordered_map<int, int> cards;

  cin >> N;
  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;

    cards[v]++;
  }

  cin >> M;
  for (int i = 0; i < M; i++) {
    int v;
    cin >> v;

    cout << cards[v] << " ";
  }

  return 0;
}
