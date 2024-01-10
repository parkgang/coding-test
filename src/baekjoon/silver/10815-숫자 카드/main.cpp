#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  unordered_map<int, int> cards;
  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;
    cards[v]++;
  }

  cin >> N;
  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;
    cout << cards[v] << " ";
  }

  return 0;
}
