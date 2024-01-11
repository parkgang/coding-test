/**
 * `unordered_map` 으로 선언하여 값 존재 여부를 확인하기 위해서 불필요하게
 * `bool` 값을 저장하고 있음
 */

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;

  cin >> N >> M;

  unordered_map<string, bool> target;
  for (int i = 0; i < N; i++) {
    string v;
    cin >> v;
    target[v] = true;
  }

  int cnt = 0;
  for (int i = 0; i < M; i++) {
    string v;
    cin >> v;

    if (target[v]) {
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}
