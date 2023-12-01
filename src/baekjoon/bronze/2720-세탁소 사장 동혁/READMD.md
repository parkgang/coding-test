## 문제

https://www.acmicpc.net/problem/2720

`1시간 25분` 걸림

## 풀이

딱히 특이하게 설명할 것은 없다. 문제를 이해하고 수식을 만들면 된다.

## Insight

### `소수` 로 계산하니 오차 발생으로 틀림

문제에 `C의 단위는 센트이다. (1달러 = 100센트)` 라고 적혀있어서 처음에는 `소수` 를 기준으로 풀었는데 자꾸 마지막 숫자에 오차가 발생하더라

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double a[4] = {
        // quarter
        0.25,
        // dime
        0.10,
        // nickel
        0.05,
        // penny
        0.01,
    };

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        double C;
        cin >> C;
        // 1달러 = 100센트
        C /= 100;

        for (int i = 0; i < 4; i++)
        {
            double c = C / a[i];

            cout << static_cast<int>(c) << " ";
            C -= static_cast<int>(c) * a[i];
        }
        cout << "\n";
    }

    return 0;
}
```

그래서 `정수` 로 풀으니 `오차` 없이 잘 나왔는데 `Insight` 는 `정수` 로 폴 수 있다면 `정수` 로 풀어라  
`double` 이더라도 굳이 `소수` 로 풀어서 오차를 유발할 필요가 없다.
