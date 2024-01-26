#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  int cnt = 0;
  for (int i = 1; i * i <= N; i++) {
    cnt++;
  }
  cout << cnt;

  return 0;
}
