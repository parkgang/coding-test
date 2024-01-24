#include <iostream>
#include <vector>

using namespace std;

void printPrimes(int m, int n) {
  /**
   * true   : 소수 O
   * false  : 소수 X
   */
  vector<bool> prime(n + 1, true);

  // 이미 소수가 아닌 수들
  prime[0] = prime[1] = false;

  for (int p = 2; p * p <= n; p++) {
    // 참: 소수
    if (prime[p]) {
      for (int i = p * p; i <= n; i += p) {
        // 소수의 배수는 모두 소수가 아니므로 벤
        prime[i] = false;
      }
    }
  }

  for (int p = m; p <= n; p++)
    // 소수 출력
    if (prime[p]) cout << p << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int M, N;

  cin >> M >> N;

  printPrimes(M, N);

  return 0;
}
