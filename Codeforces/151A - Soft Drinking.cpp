#include <iostream>

using namespace std;

int mi(int a, int b, int c)
{
    if(a < b && a < c) return a;
    else if ( b < a && b < c ) return b;
    else return c;
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >>  k >>  l >> c >> d >> p >> nl >> np;
    int xx = (k * l) / nl;
    int yy = c * d;
    int zz = (p / np);

    cout << ((mi(xx, yy, zz)) / n )<< endl;




    return 0;
}
