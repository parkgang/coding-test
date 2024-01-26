#include <cmath>
#include <iostream>
#include <vector>

#define MAX 1000000

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // 소수 구하기
  vector<bool> prime(MAX + 1, true);
  prime[0] = prime[1] = false;

  for (int i = 2; i < sqrt(MAX); i++) {
    if (prime[i]) {
      for (int j = i * i; j <= MAX; j += i) {
        prime[j] = false;
      }
    }
  }

  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int v;
    cin >> v;

    int cnt = 0;
    for (int i = 0; i <= v / 2; i++) {
      int a = i;
      int b = v - i;

      if (prime[a] && prime[b]) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}
