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
  // C 스타일 2차원 배열의 각 행이 연속된 메모리 블록으로 구성되어 있기 때문에
  // std::sort와 같은 표준 알고리즘을 직접 사용하기 어렵기 때문에 변경이 필요
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
