#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    cout << setprecision(12) << fixed;
    int n, a, sum = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a;
        sum += a;
    }
    double var = (double)sum/(n*100);
//    cout << (long long)((sum/(n*100))*100) << endl;
        cout << var * 100 << endl;

    return 0;
}
