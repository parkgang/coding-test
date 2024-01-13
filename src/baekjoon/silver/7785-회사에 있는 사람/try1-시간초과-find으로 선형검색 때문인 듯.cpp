#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  unordered_set<string> logs;
  vector<string> order;

  for (int i = 0; i < n; i++) {
    string name, event;

    cin >> name >> event;

    if (event == "enter") {
      logs.insert(name);
      order.push_back(name);
    } else if (event == "leave") {
      logs.erase(name);
      auto it = find(order.begin(), order.end(), name);
      order.erase(it);
    }
  }

  sort(order.begin(), order.end(), greater<>());

  for (auto &v : order) {
    cout << v << "\n";
  }

  return 0;
}
