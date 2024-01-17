#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  set<string> substrings;

  for (int i = 0; i < s.length(); ++i) {
    for (int j = 1; j <= s.length() - i; ++j) {
      substrings.insert(s.substr(i, j));
    }
  }

  cout << substrings.size() << "\n";

  return 0;
}
