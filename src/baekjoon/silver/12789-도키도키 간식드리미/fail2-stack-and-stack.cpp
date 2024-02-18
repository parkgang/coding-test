#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> ve;
  stack<int> line1;
  stack<int> line2;

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;
    ve.push_back(v);
  }
  reverse(ve.begin(), ve.end());
  for (auto &v : ve) {
    line1.push(v);
  }

  int 번호표 = 1;
  while (true) {
    if (번호표 == N + 1 && line1.empty() && line2.empty()) {
      break;
    } else if (line1.empty()) {
      auto top = line2.top();

      if (top == 번호표) {
        line2.pop();
        번호표++;
      } else {
        cout << "Sad\n";
        return 0;
      }

    } else {
      auto top = line1.top();

      if (top == 번호표) {
        번호표++;
        line1.pop();
      } else {
        line2.push(top);
        line1.pop();
      }
    }
  }

  cout << "Nice\n";

  return 0;
}
