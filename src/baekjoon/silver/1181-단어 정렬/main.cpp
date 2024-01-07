#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

struct CompareLength {
  bool operator()(const string& a, const string& b) const {
    if (a.size() == b.size()) {
      return a < b;
    }
    return a.size() < b.size();
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  set<string, CompareLength> words;

  for (int i = 0; i < N; i++) {
    string input;
    cin >> input;
    words.insert(input);
  }

  for (const auto v : words) {
    cout << v << "\n";
  }

  return 0;
}
