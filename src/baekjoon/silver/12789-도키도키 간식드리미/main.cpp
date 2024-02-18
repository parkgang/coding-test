#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  queue<int> queue;
  stack<int> stack;
  int current = 1;

  for (int i = 0; i < N; ++i) {
    int num;
    cin >> num;
    queue.push(num);
  }

  while (!queue.empty() || !stack.empty()) {
    if (!queue.empty() && queue.front() == current) {
      queue.pop();
      current++;
    } else if (!stack.empty() && stack.top() == current) {
      stack.pop();
      current++;
    } else if (!queue.empty()) {
      stack.push(queue.front());
      queue.pop();
    } else {
      cout << "Sad\n";

      return 0;
    }
  }

  cout << "Nice\n";

  return 0;
}
