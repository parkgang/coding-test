#include <algorithm>
#include <iostream>

using namespace std;

int 양arr[10000001] = {
    0,
};
int 음arr[10000001] = {
    0,
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;

  cin >> N;

  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;

    if (v >= 0) {
      양arr[v]++;
    } else {
      음arr[v]++;
    }
  }

  cin >> N;
  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;

    if (v >= 0) {
      cout << 양arr[v];

    } else {
      cout << 음arr[v];
    }
    cout << " ";
  }

  return 0;
}
