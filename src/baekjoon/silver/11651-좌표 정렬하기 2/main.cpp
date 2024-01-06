#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  vector<vector<int>> points;

  cin >> N;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    points.push_back({x, y});
  }

  sort(points.begin(), points.end(), [](vector<int> a, vector<int> b) {
    if (a[1] == b[1]) {
      return a[0] < b[0];
    }
    return a[1] < b[1];
  });

  for (const auto v : points) {
    cout << v[0] << " " << v[1] << "\n";
  }

  return 0;
}
