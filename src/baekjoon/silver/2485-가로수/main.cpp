#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> tree(N), diff;

  for (auto &v : tree) {
    cin >> v;
  }

  for (int i = 0; i < N - 1; i++) {
    diff.push_back(tree[i + 1] - tree[i]);
  }

  int g = gcd(diff[0], diff[1]);
  for (int i = 2; i < diff.size(); i++) {
    g = gcd(g, diff[i]);
  }

  int cnt = 0;
  for (auto &v : diff) {
    cnt += (v / g) - 1;
  }

  cout << cnt << "\n";

  return 0;
}
