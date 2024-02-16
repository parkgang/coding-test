#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    string line;
    cin >> line;

    int open = 0;
    bool isValid = true;
    for (auto &v : line) {
      if (v == '(') {
        open++;
      } else {
        if (!open) {
          // 열려있는 것이 없는데 닿힌 것이 들어온 것으로 잘못된 형태
          isValid = false;
        } else {
          open--;
        }
      }
    }

    if (!open && isValid)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
