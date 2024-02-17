#include <iostream>
#include <stack>

using namespace std;

bool isValid(std::string &line) {
  stack<char> stack;
  for (auto &v : line) {
    switch (v) {
      case '[':
      case '(':
        stack.push(v);
        break;
      case ']':
      case ')':
        if (stack.empty()) {
          return false;
        }

        auto top = stack.top();
        if (v == ']' && top == '[') {
          stack.pop();
        } else if (v == ')' && top == '(') {
          stack.pop();
        } else {
          return false;
        }

        break;
    }
  }
  if (!stack.empty()) {
    return false;
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    string line;
    getline(cin, line);

    if (line == ".") {
      break;
    }

    auto res = isValid(line);
    if (res) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }

  return 0;
}
