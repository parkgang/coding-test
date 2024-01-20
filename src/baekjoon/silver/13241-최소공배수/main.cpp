#include <iostream>

using namespace std;

// 최대 공약수
template <typename T>
T gcd(T a, T b) {
  while (b != 0) {
    T r = a % b;
    a = b;
    b = r;
  }

  return a;
}

// 최소 공배수
template <typename T>
T lcm(T a, T b) {
  return (a * b) / gcd(a, b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long a, b;

  cin >> a >> b;
  cout << lcm(a, b) << "\n";

  return 0;
}
