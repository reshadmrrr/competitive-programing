#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 4;
        for (int i = 0; i < 30; i++)
        {
            if (n % (k - 1) == 0)
            {
                cout << n / (k - 1) << endl;
                break;
            }
            k *= 2;
        }
    }
    return 0;
}
