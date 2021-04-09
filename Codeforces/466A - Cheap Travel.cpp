#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
  	printf("%d\n", m * a <= b ? n * a : (n / m) * b + min((n % m) * a, b)); 
    return 0;
}
