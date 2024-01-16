#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int aLen, bLen;
  cin >> aLen >> bLen;

  unordered_set<int> aAtoms;
  for (int i = 0; i < aLen; i++) {
    int v;
    cin >> v;
    aAtoms.insert(v);
  }

  unordered_set<int> bAtoms;
  for (int i = 0; i < bLen; i++) {
    int v;
    cin >> v;
    bAtoms.insert(v);
  }

  int aCnt = 0;
  // A-B
  for (auto &v : aAtoms) {
    if (bAtoms.find(v) == bAtoms.end()) {
      aCnt++;
    }
  }

  int bCnt = 0;
  // B-A
  for (auto &v : bAtoms) {
    if (aAtoms.find(v) == aAtoms.end()) {
      bCnt++;
    }
  }

  cout << aCnt + bCnt << "\n";

  return 0;
}
