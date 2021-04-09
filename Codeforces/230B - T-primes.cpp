#include <iostream>
#include <cmath>

using namespace std;

#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef unsigned long long ull;

bool is_prime(ull n)
{
    if (n == 1 or n % 2 == 0)
        return false;
    else if (n == 2)
        return true;
    else
        for (ull i = 3; i * i <= n; i += 2)
            if (n % i == 0)
                return false;
    return true;
}

int main()
{
    fast;
    int n;
    cin >> n;
    while (n--)
    {
        ull a;
        cin >> a;
        ull s = sqrt(a);
        if (s * s == a and is_prime(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
