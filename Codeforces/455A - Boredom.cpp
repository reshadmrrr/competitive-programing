#include <iostream>

using namespace std;

#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define MAX 100001

typedef long long ll;

ll cnt[MAX] = {0};

int main()
{
    fast;
    ll n, a;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        cnt[a]++;
    }
    for (ll i = 2; i < MAX; i++)
    {
        cnt[i] = max(cnt[i - 1], i * cnt[i] + cnt[i - 2]);
    }
    cout << cnt[MAX - 1] << endl;

    return 0;
}