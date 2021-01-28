#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, num; cin >> n;
    for( int i = 0; i < n; i++ ){
        cin >> num;
        if( num == 1 ){
            cout << "HARD" << endl;
            return 0;
        }  
    }
    cout << "EASY" << endl;
    return 0;
}
