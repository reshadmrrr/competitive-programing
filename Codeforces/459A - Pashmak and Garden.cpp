//sol2

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    fast;
    short x1, y1, x2, y2, a;
    cin >> x1 >> y1 >> x2 >> y2; 

    if( x1 == x2 ){
        a = y2 - y1 + x1;
        printf("%d %d %d %d\n", a , y1, a, y2 );
    }
    else if( y1 == y2 ){
        a = x2 - x1 + y1; 
        printf("%d %d %d %d\n", x1, a, x2, a );
    }
    else if( abs( y2 - y1 ) == abs( x2 - x1 ) ){
        printf("%d %d %d %d\n", x1, y2, x2, y1);
    }
    else printf("-1\n");


    return 0;
}

//sol1 
#include <iostream>
#include <stdio.h>
#include <cmath>
 
using namespace std;
 
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    fast;
    short x1, y1, x2, y2, a;
    cin >> x1 >> y1 >> x2 >> y2; 
 
    if( x1 == x2 ){
        if( y2 > y1 ) a = y2 - y1;
        else a = y1 - y2; 
        printf("%d %d %d %d\n", x1 + a , y1, x1 + a, y2 );
    }
    else if( y1 == y2 ){
        if( x1 > x2 ) a = x1 - x2;
        else a = x2 - x1;
        printf("%d %d %d %d\n", x1, y1 + a, x2, y2 + a );
    }
    else if( abs( y1 - y2 ) == abs( x1 - x2 ) ){
        printf("%d %d %d %d\n", x1, y2, x2, y1);
    }
    else printf("-1\n");
 
 
    return 0;
}
