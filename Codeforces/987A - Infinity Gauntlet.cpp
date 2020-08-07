#include <iostream>
#include <map>
using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
  fast;

  map < string, string > mp;
  map< string, string > :: iterator it; 
  
  mp.insert( make_pair( "purple", "Power" ) );
  mp.insert( make_pair( "green", "Time" ) );
  mp.insert( make_pair( "blue", "Space" ) );
  mp.insert( make_pair( "orange", "Soul" ) );
  mp.insert( make_pair( "red", "Reality" ) );
  mp.insert( make_pair( "yellow", "Mind" ) );
  
  int n; string name;
  cin >> n;
  
  while( n-- ){
    cin >> name;
    mp.erase( name );
  } 

  cout << mp.size() << endl;
  for( it = mp.begin(); it != mp.end(); it++ )
    cout << it -> second << endl;

  return 0;
}
