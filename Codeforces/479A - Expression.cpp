#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[3];
	for(int i = 0; i < 3; i++)
        cin >> a[i];

 //   sort(a, a+3);

    int mx = -9999;

    mx = max( mx, a[0] + a[1] * a[2] );
    mx = max( mx, a[0] * (a[1] + a[2]) );
    mx = max( mx, a[0] * a[1] * a[2] );
    mx = max( mx, (a[0] + a[1]) * a[2] );
    mx = max( mx, a[0] + a[1] + a[2] );

    cout << mx << "\n";

    return 0;



}

