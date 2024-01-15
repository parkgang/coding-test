#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  unordered_set<string> 듣도_못한_사람;
  for (int i = 0; i < N; i++) {
    string v;
    cin >> v;
    듣도_못한_사람.insert(v);
  }

  vector<string> 듣보잡;
  for (int i = 0; i < M; i++) {
    string 보도_못한_사람;
    cin >> 보도_못한_사람;
    if (듣도_못한_사람.find(보도_못한_사람) != 듣도_못한_사람.end()) {
      듣보잡.push_back(보도_못한_사람);
    }
  }

  sort(듣보잡.begin(), 듣보잡.end());
  cout << 듣보잡.size() << "\n";
  for (auto &v : 듣보잡) {
    cout << v << "\n";
  }

  return 0;
}
