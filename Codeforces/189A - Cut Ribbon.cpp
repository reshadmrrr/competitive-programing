#include <iostream>

using namespace std;

#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    fast;
    int n, a, b, c, mx = -1;
    cin >> n >> a >> b >> c;
    for (int i = 0; i * a <= n; i++)
    {
        for (int j = 0; i * a + j * b <= n; j++)
        {
            int k = (n - i * a - j * b) / c;
            if (i * a + j * b + k * c == n)
                mx = max(mx, i + j + k);
        }
    }
    cout << mx << endl;
    return 0;
}
