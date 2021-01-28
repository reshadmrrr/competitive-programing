#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n; cin >> n;
    int p, pos[n + 1] = {0};
    for( int i = 1; i <= n; i++ ){
        cin >> p;
        pos[p] = i; 
    }
    int ans = 0, cnt = 0, last = 0;
    for( int i = 1; i <= n; i++ ){
        if( pos[i] > last ){
            last = pos[i];
            cnt++;
        }else{
            cnt = 1;
            last = pos[i];
        }
        ans = max( ans, cnt );
    }
    cout << n - ans << endl;
    return 0;
}
