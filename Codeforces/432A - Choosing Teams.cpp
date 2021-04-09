#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    fast;
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int y, tm;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        v.push_back(5 - y);
    }

    int cnt = 0;
    for (auto u : v)
        cnt += u >= k ? 1 : 0;
    cout << cnt / 3 << endl;
    return 0;
}
