## 문제

https://www.acmicpc.net/problem/14215

`13분`

## 풀이

문제가 이해가 안되서 찾아보았습니다.

`삼각형` 은 `가장 긴 변` 이 `다른 변의 합` 보다 `커` 야 합니다.

문제 요구사항에서 길이는 `줄일 수` 만 있음으로 `가장 긴 변` 을 줄여서 삼각형이 될 수 있도록 하면됩니다.

## Insight

### 굳이 `반복문` 으로 가장 긴 변을 줄여서 찾을 필요가 없다

`삼각형` 이 되기 위해서 `가장 긴 변` 을 줄여서 찾았는데 생각해보니까 `줄이는 것` 만 가능한 요구사항에서는 `가장 긴 변` 이외의 값으로 최대 크기의 삼각형을 만들 수 있음으로 굳이 구할 필요가 없습니다.

고로, 최소한의 `시간 복잡도` 으로 아래의 코드로 달성할 수 있습니다.

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3];

    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    if (a[0] + a[1] > a[2])
        cout << a[0] + a[1] + a[2];
    else
        cout << (a[0] + a[1]) * 2 - 1;

    return 0;
}
```

출저: https://codecollector.tistory.com/1440
