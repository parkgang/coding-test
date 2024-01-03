## 문제

https://www.acmicpc.net/problem/10989

## 풀이 시간

14분

## 오답노트

일반적인 문제보다 `시간` 과 `메모리` 이 있는 줄 모르고 `STL` 의 `vector` 과 `sort` 조합으로 문제를 풀었더니 `메모리 초과` 문제가 발생했다.

```cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<int> nums;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        nums.push_back(v);
    }

    sort(nums.begin(), nums.end());

    for (auto v : nums)
    {
        cout << v << "\n";
    }

    return 0;
}
```

어떻게 해야지 풀 수 있을지 몰라서 다른 분의 풀의의 `핵심` 만 보았는데 `배열` 으로 선언하고 `숫자` 중복될 수 있다는 점이 눈에 띄었다.

생각해보니 `배열` 의 `index` 를 입력된 숫자로 치고, 각 배열의 값을 `숫자의 개수` 로 하면 `input` 은 그대로 받아서 출력하면 `오름차순` 정렬이라는 것을 깨닫고 구현하니 맞았습니다.

참고: https://tooo1.tistory.com/72
