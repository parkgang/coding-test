/**
 * 말도 안되긴 하지만 대기열의 순서가 보장되는 값이면 정답이지 않을까? 하고
 * 대기열의 순서 정렬 후 순서가 맞는지 체크하는 접근방법
 * 이유는 대기열과 기다리는 공간으로 swap을 하면
 * 어떻게든 간식을 받을 수 있다고 생각했고
 * 그렇다면 대기열 순서 자체가 보장된다면
 * 어떻게든 간식을 받을 수 있다고 생각했기 때문
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> vec;

  while (N--) {
    int v;
    cin >> v;
    vec.push_back(v);
  }

  sort(vec.begin(), vec.end());

  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] != i + 1) {
      cout << "Sad\n";
      return 0;
    }
  }
  cout << "Nice\n";

  return 0;
}
