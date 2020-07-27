#include <iostream>
#include <math.h>
 
 
#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
int main()
{
    yo;
    int a, b, wa = 0, wb = 0, d = 0;
    cin >> a >> b; 

    for( int i = 1; i <= 6; ++i ){
        if ( abs(a - i) < abs(b - i) )      wa++;
        else if ( abs(a - i) > abs(b - i) ) wb++;
        else                                d++; 
    }


    cout << wa << " " << d << " " << wb << endl; 


}
// int a,b; 
// main()
// {

//     scanf("%d%d",&a,&b);
//     printf("%d %d %d",a^b?a<b?(a+b-1)/2:(13-a-b)/2:0,a^b?(a+b)%2<1:6,a^b?a>b?(a+b-1)/2:(13-a-b)/2:0);
// }
