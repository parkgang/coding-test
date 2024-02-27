#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K;
  cin >> N >> K;

  queue<int> queue;
  for (int i = 1; i <= N; ++i) {
    queue.push(i);
  }

  cout << "<";
  while (!queue.empty()) {
    for (int i = 0; i < K - 1; ++i) {
      queue.push(queue.front());
      queue.pop();
    }

    cout << queue.front();
    queue.pop();

    if (queue.size()) {
      cout << ", ";
    }
  }
  cout << ">";

  return 0;
}
