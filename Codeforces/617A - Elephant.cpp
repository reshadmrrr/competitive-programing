#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, flag = 0;
	cin >> n;
	if(n % 5 == 0)
        cout << n /5 << endl;

    else
    {
        if(n % 5 > 0)
            cout << n / 5 + 1 << endl;
        else
            cout << 1 << endl;
    }

	return 0;
}
