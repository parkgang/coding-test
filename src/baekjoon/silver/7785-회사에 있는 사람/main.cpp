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

  for (int i = 0; i < n; i++) {
    string name, event;
    cin >> name >> event;

    if (event == "enter") {
      logs.insert(name);
    } else {
      logs.erase(name);
    }
  }

  vector<string> sortedLogs(logs.begin(), logs.end());
  sort(sortedLogs.begin(), sortedLogs.end(), greater<>());

  for (const auto& name : sortedLogs) {
    cout << name << '\n';
  }

  return 0;
}
