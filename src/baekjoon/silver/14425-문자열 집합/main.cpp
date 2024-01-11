#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  unordered_set<string> target;
  string v;
  for (int i = 0; i < N; i++) {
    cin >> v;
    target.insert(v);
  }

  int cnt = 0;
  for (int i = 0; i < M; i++) {
    cin >> v;
    if (target.find(v) != target.end()) {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}
