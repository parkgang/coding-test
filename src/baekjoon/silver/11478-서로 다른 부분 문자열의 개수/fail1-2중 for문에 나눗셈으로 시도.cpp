#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  // a
  // a -> 1
  // ab
  // a, b, ab -> 3
  // abc
  // a, b, c, ab, bc, abc -> 6
  // abcd
  // a, b, c, d, ab, bc, cd, abc, bcd, abcd -> 10
  // abcde
  // a, b, c, d, e, ab, bc, cd, de, abc, bcd, cde, abcd, bcde, abcde -> 15

  int sSize = s.size();
  int cnt = 0;
  for (int i = 1; i < sSize + 1; i++) {
    auto res = sSize / i;
    cnt += res;
  }

  cout << cnt;

  return 0;
}
