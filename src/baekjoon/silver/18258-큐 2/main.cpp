#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  queue<int> queue;
  for (int i = 0; i < N; ++i) {
    string cmd;
    int v;
    cin >> cmd;

    if (cmd == "push") {
      cin >> v;
      queue.push(v);
    } else if (cmd == "pop") {
      if (queue.empty()) {
        cout << "-1\n";
      } else {
        cout << queue.front() << "\n";
        queue.pop();
      }
    } else if (cmd == "size") {
      cout << queue.size() << "\n";
    } else if (cmd == "empty") {
      if (queue.empty()) {
        cout << "1\n";
      } else {
        cout << "0\n";
      }
    } else if (cmd == "front") {
      if (queue.empty()) {
        cout << "-1\n";
      } else {
        cout << queue.front() << "\n";
      }
    } else if (cmd == "back") {
      if (queue.empty()) {
        cout << "-1\n";
      } else {
        cout << queue.back() << "\n";
      }
    }
  }

  return 0;
}
