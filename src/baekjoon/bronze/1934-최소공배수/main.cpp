#include <iostream>

using namespace std;

// 최대공약수를 구하는 함수 (유클리드 호제법 이용)
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

// 최소공배수를 구하는 함수
int lcm(int a, int b) {
  // 최소공배수 = (A x B) / 최대공약수
  return a * b / gcd(a, b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, a, b;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> a >> b;
    cout << lcm(a, b) << '\n';
  }

  return 0;
}
