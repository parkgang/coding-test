#include <iostream>
#include <numeric>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int 분자 = (a * d) + (c * b);
  int 분모 = b * d;
  int 최대공약수 = gcd(분자, 분모);

  // 기약분수 출력
  cout << 분자 / 최대공약수 << " " << 분모 / 최대공약수;

  return 0;
}
