#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  stack<int> stack;
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    int cmd;
    cin >> cmd;

    switch (cmd) {
      case 1:
        int num;
        cin >> num;
        stack.push(num);
        break;
      case 2:
        if (!stack.empty()) {
          cout << stack.top() << "\n";
          stack.pop();
        } else {
          cout << "-1\n";
        }
        break;
      case 3:
        cout << stack.size() << "\n";
        break;
      case 4:
        if (stack.empty()) {
          cout << "1\n";
        } else {
          cout << "0\n";
        }
        break;
      case 5:
        if (stack.empty()) {
          cout << "-1\n";
        } else {
          cout << stack.top() << "\n";
        }
        break;
    }
  }

  return 0;
}
