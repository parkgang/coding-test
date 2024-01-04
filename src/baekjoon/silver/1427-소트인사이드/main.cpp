#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long v;
    cin >> v;

    vector<int> nums;

    while (v)
    {
        auto num = v % 10;
        nums.push_back(num);
        v /= 10;
    }

    sort(nums.begin(), nums.end(), greater<int>());

    for (auto v : nums)
    {
        cout << v;
    }

    return 0;
}
