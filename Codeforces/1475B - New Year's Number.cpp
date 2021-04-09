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
    int t, a = 2020, b = 2021;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (n >= 2020)
        {
            if (n % a == 0 or n % b == 0)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                n -= a;
                if (n % b == 0)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        if (n < a)
            cout << "NO" << endl;
    }
    return 0;
}
