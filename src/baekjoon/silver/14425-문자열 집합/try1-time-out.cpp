/**
 * find 으로 선형 검색을 하니 시간 초과 발생
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;

  cin >> N;
  cin >> M;

  vector<string> target(N);
  for (int i = 0; i < N; i++) {
    cin >> target[i];
  }

  int cnt = 0;
  for (int i = 0; i < M; i++) {
    string v;
    cin >> v;

    auto res = find(target.begin(), target.end(), v);
    if (res != target.end()) {
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}
