#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    fast;
    int t = 240, cnt = 0;
    int n, k;
    cin >> n >> k;
    t -= k;
   // cout << t << endl;
    for( int i = 1; i <= n and t >= 0; i++ ){
       if( (t - 5 * i) >= 0 ) {
            t -= 5 * i;
            cnt++;
       } 
        
    } 
    cout << cnt << endl;
    return 0;
}
