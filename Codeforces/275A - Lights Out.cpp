#include <iostream>

using namespace std;

int main()
{
    int a[5][5], tmp[5][5];

    for( int i = 1; i < 4; ++i ){
        for( int j = 1; j < 4; ++j){
            cin >> a[i][j];
            tmp[i][j] = a[i][j];
        }
    }

    for( int i = 1; i < 4; ++i ){
        for( int j = 1; j < 4; ++j ){
            if( a[i][j] != 0){
                tmp[i - 1][j] += a[i][j];
                tmp[i + 1][j] += a[i][j];
                tmp[i][j + 1] += a[i][j];
                tmp[i][j - 1] += a[i][j];
            }
        }
    }

    for( int i = 1; i < 4; ++i ){
        for( int j = 1; j < 4; ++j){
            if(tmp[i][j] % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }

    return 0;
}
