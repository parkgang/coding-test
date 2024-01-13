#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<string> vec;
  unordered_map<string, int> unmap;
  for (int i = 0; i < N; i++) {
    string v;
    cin >> v;
    vec.push_back(v);
    unmap.insert({v, i});
  }

  for (int i = 0; i < M; i++) {
    string v;
    cin >> v;

    if (isdigit(v[0])) {
      auto index = stoi(v);
      cout << vec[index - 1] << "\n";
    } else {
      cout << unmap[v] + 1 << "\n";
    }
  }

  return 0;
}
