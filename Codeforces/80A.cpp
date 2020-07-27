#include <iostream>

using namespace std;

int main()
{
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    for( int i = 1; i < 15; ++i){
        if(prime[i - 1] == n && prime[i] == m ) cnt++;
    }

    if(cnt > 0)  cout << "YES\n";
    else cout << "NO\n";

    return 0;

}
