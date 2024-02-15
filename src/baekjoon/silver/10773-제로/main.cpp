#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  stack<int> stack;

  int k;
  cin >> k;

  for (int i = 0; i < k; ++i) {
    int v;
    cin >> v;

    if (v == 0) {
      stack.pop();
    } else {
      stack.push(v);
    }
  }

  int sum = 0;
  while (stack.size()) {
    int v = stack.top();
    stack.pop();
    sum += v;
  }

  cout << sum;

  return 0;
}
