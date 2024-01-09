#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<vector<string>> vec;
  for (int i = 0; i < N; i++) {
    string a, b;
    cin >> a >> b;
    vec.push_back({a, b, to_string(i)});
  }

  sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
    if (stoi(a[0]) == stoi(b[0])) {
      return stoi(a[2]) < stoi(b[2]);
    }
    return stoi(a[0]) < stoi(b[0]);
  });

  for (auto& v : vec) {
    cout << v[0] << " " << v[1] << "\n";
  }

  return 0;
}
