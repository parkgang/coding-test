#include <algorithm>
#include <iostream>
#define DOT_MAX 100000

using namespace std;

void bubbleAscSort(int arr[DOT_MAX][2], int n) {
  for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (
          // X좌표가 더 크거나
          arr[j][0] > arr[j + 1][0] ||
          // X좌표가 더 큰 경우 Y기준으로 정렬
          (arr[j][0] == arr[j + 1][0] && arr[j][1] > arr[j + 1][1])) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void print(int arr[DOT_MAX][2], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i][0] << " " << arr[i][1] << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;

  cin >> N;

  int arr[DOT_MAX][2];

  for (int i = 0; i < N; i++) {
    cin >> arr[i][0];
    cin >> arr[i][1];
  }

  bubbleAscSort(arr, N);

  print(arr, N);

  return 0;
}
