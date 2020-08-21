#include <iostream>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    fast;
    int n, cnt = 1, ans = 0;
    int first, second;
    cin >> n >> first;
    for( int i = 1; i < n; i++ ){ 
        cin >> second;
        if( first <=  second ){
            cnt++;
            ans = max( cnt, ans );
        }
        else cnt = 1;  
        first = second;
    }

    ans = max( ans, 1 );
    
    cout << ans << endl;
    

    return 0;
}
