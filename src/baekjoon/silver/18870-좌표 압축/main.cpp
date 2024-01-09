#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> points(N), sortedPoints;
  for (int i = 0; i < N; i++) {
    cin >> points[i];
    sortedPoints.push_back(points[i]);
  }

  // 정렬하고 중복 제거
  sort(sortedPoints.begin(), sortedPoints.end());
  sortedPoints.erase(unique(sortedPoints.begin(), sortedPoints.end()),
                     sortedPoints.end());

  // 각 숫자의 순위(좌표 압축 결과)를 매핑
  unordered_map<int, int> rank;
  for (int i = 0; i < sortedPoints.size(); i++) {
    rank[sortedPoints[i]] = i;
  }

  // 결과 출력
  for (int i = 0; i < N; i++) {
    cout << rank[points[i]] << ' ';
  }

  return 0;
}
