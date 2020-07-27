#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m, cnt = 0;
    char c;
    cin >> n >> m;
    for( int i = 0; i < n; ++i){
        for( int j = 0; j < m; ++j ){
            cin >> c;
            if( c == 'C' || c == 'M' || c == 'Y' ){
                cnt++;
            }
        }
    }

    cnt ? printf( "#Color\n" ): printf("#Black&White\n");
    return 0;

}
