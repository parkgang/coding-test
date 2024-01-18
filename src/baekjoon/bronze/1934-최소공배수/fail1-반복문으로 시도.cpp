#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  for (int i = 0; i < T; i++) {
    int A, B;
    cin >> A >> B;

    unordered_set<int> check;
    int max = A * B;
    for (int i = 1; A * i < max; i++) {
      check.insert(A * i);
    }
    for (int i = 1; B * i < max; i++) {
      if (check.find(B * i) != check.end()) {
        cout << B * i << "\n";
        break;
      }
    }
  }

  return 0;
}
