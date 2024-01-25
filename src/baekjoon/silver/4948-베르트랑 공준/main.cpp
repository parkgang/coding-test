#include <iostream>
#include <vector>

using namespace std;

vector<bool> prime_range(int n) {
  vector<bool> primes(n + 1, true);

  primes[0] = primes[1] = false;

  for (int i = 2; i < n + 1; i++) {
    if (primes[i]) {
      for (int j = i + i; j < n + 1; j += i) {
        primes[j] = false;
      }
    }
  }

  return primes;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    auto res = prime_range(n * 2);

    int cnt = 0;
    for (int i = n + 1; i < res.size(); i++) {
      if (res[i]) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }

    return 0;
}
