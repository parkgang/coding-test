#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  int arr[100000][2];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i][0];
    cin >> arr[i][1];
  }

  // 포인터 배열 생성
  const int *pointsPtrs[n];
  for (int i = 0; i < n; ++i) {
    pointsPtrs[i] = arr[i];
  }

  // 포인터 배열을 정렬
  sort(pointsPtrs, pointsPtrs + n, [](const int *a, const int *b) {
    if (a[0] == b[0]) {
      return a[1] < b[1];
    }
    return a[0] < b[0];
  });

  // 정렬된 포인터 배열을 통해 결과 출력
  for (int i = 0; i < n; i++) {
    cout << pointsPtrs[i][0] << " " << pointsPtrs[i][1] << "\n";
  }

  return 0;
}
