#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, V;
    cin >> A >> B >> V;

    // 정상에 도착하면 더 이상 내려가지지 않음으로 `총 거리(V) - 하루 이동 거리(A)` 으로 사전에 미리 정상 도착하는 거리를 뺌
    int totalDis = V - A;
    // 하루에 올라갈 수 있는 거리는 올라갔다가 내려오므로: `하루 이동 거리(A) - 하루 내려오는 거리(B)`
    int dayDis = A - B;

    int ____day = totalDis / dayDis;
    int leftDis = totalDis % dayDis;

    // 만약, 남은 거리가 있으면 한번 더 올라가야 하므로 +1
    if (leftDis != 0)
        ____day++;

    // 최종적으로 1일부터 계산되어야하기 때문에 +1
    cout << ____day + 1;

    return 0;
}
