#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  int sSize = s.size();
  int cnt = 0;
  for (int i = 1; i < sSize + 1; i++) {
    for (int j = 0; j < sSize + 1; j += i) {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}
