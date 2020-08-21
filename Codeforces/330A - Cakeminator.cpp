//sol1

#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int r, c, rcnt = 0, ccnt = 0, row = 0, col = 0; 
    cin >> r >> c;
    char a[r][c];
    for( int i = 0; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            cin >> a[i][j];
        }
    }

    for( int i = 0; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            if ( a[i][j] == 'S' ) {rcnt = 0; break;}
            rcnt++;
            // cout << rcnt << endl;
            if( rcnt == c ) row++;
        }
        rcnt = 0;
        
    }


    for( int j = 0; j < c; j++ ){
        for( int i = 0; i < r; i++ ){
            if ( a[i][j] == 'S' ) {ccnt = 0; break;}
            ccnt++;
            // cout << ccnt << endl;
            if( ccnt == r ) col++; 
        }
        ccnt = 0;
    }

    cout << row * c + col * r - row * col << endl;
    return 0;
} 

//sol2
#include <iostream>
#include <set>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int r, c, rcnt = 0, ccnt = 0, scnt = 0; 
    set < int > row, col;
    cin >> r >> c;
    char a[r][c];
    for( int i = 0; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            cin >> a[i][j];
            if( a[i][j] == 'S'){
                row.insert( i );
                col.insert( j );
            }
        }
    }
    cout << r * c - row.size() * col.size() <<  endl;
    row.clear();
    col.clear();
    return 0;

} 