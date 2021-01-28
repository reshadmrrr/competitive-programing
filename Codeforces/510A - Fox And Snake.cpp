#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{   
    int n, m;
    cin >> n >> m;

    string s1, s2, s3;

    for( int i = 0; i < m; i++ ) s1 += "#";
    for( int i = 1; i < m; i++ ) s2 += "."; s2 += "#";
    s3 += "#"; for( int i = 1; i < m; i++ ) s3 += ".";
    
    bool check = true;

    for( int i = 0; i < n; i++ ){
        if( i % 2 == 0 ) cout << s1 << endl;
        else if( check ) cout << s2 << endl, check = false;
        else             cout << s3 << endl, check = true;
    }
    
    return 0;
}
