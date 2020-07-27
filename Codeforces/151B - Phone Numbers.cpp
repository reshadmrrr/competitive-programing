#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int checkNum( string s ){
  int i;
  int str[] = { s[0] - '0', s[1] - '0', s[3] - '0', s[4] - '0', s[6] - '0', s[7] - '0' };

  for( i = 1; i < 6; i++ )
    if( str[i - 1] != str[i] )
      break;

  if( i == 6 ) return 0;

  for( i = 1; i < 6; i++ )
    if( str[i - 1] <= str[i] )
      return 2;

  return 1;  
}

void namePrint( vector < string > v ){
  cout << v[0];
  for( int i = 1; i < v.size(); i++ ) 
    cout << ", " << v[i];
  cout << ".\n";
}


int main()
{
    fast;
    
    int t;
    cin >> t;

    int a[3][t];
    a[0][0] = a[1][0] = a[2][0] = 0;

    vector < string > name[3];

    for( int i = 0; i < t; i++ ){
      int n;
      string s;
      int temp_a[] = { 0, 0, 0};

      cin >> n >> s;

      for( int j = 0; j < n; j++ ){
        string num;
        cin >> num;
        temp_a[ checkNum( num ) ]++;
      }
      for( int j = 0; j < 3; j++ ){
        if( temp_a[j] > a[j][0] ){
          a[j][0] = temp_a[j];
          name[j].clear(); 
          name[j].push_back( s );
        }
        else if( temp_a[j] == a[j][0] ) name[j].push_back( s );
        
 
      }
    }

    cout << "If you want to call a taxi, you should call: "; 
    namePrint( name[0] );
    cout << "If you want to order a pizza, you should call: "; 
    namePrint( name[1] );
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    namePrint( name[2] );
    

    return 0;
}
