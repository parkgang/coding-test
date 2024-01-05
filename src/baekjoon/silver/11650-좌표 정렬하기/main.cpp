#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<vector<int>> points;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    points.push_back({x, y});
  }

  sort(points.begin(), points.end());

  for (const auto v : points) {
    cout << v[0] << " " << v[1] << "\n";
  }

  return 0;
}
