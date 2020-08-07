#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int GCD( int a, int b );
int LCM( int a, int b );

int main()
{
    fast;



    int n; 
     cin >> n;
     while( n-- ){
      bool cx = true, cy = true;
      int l, r, x, y;
      cin >> l >> r; 
      x = l, y = r;
      while( 1 ){
        if( x >= r  && y <= l ){
          cout << "-1 -1" << endl;
          break;
        }
        if( (LCM( x, y ) <= r )  && (LCM( x, y) >= l) && ( x < y )) {
          cout << x << " " << y << endl;

          break;
        }
        else{
          if( cy ){
            cy = false;
            cx = true;
            y--;
          }
          else{
            cx = false;
            cy = true;
            x++;
         
          }
        } 
      } 
     } 
    
    return 0;
}

int GCD( int a, int b ){ 
  while( a != b ){
    if( a > b) a -= b;
    else       b -= a;
  }
  return a;  
}
int LCM( int a, int b ){ return ((a * b) / GCD(a, b));}


