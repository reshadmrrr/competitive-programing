#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector < string > split( string s );

int main()
{
    fast;
    // string s; int q;
    //       vector < string > v;

    // cin >> s >> q;
    // for( int i = 0; i < q + 1; i++ ){
    //   string line;
    //   getline( cin, line );
    //   v.push_back( line );
    // }

    // for( int i = 0; i < v.size(); i++ ){
    //   cout << v[i] << endl;
    // }
    vector < string > v = split( "2 1 8 ATGC" );
    for( int i = 0; i < v.size(); i++ ) cout << v[i] << endl;
    return 0;
}

vector < string > split( string s ){
  vector < string > splitted;
  int pos = 0;
  string s_string;
  while( s.size() != 0 ){
    pos = s.find(" ");
    s_string = s.substr( 0, pos );
    splitted.push_back( s_string );
    s.erase(0, pos + 1); // recheck +2
  }

  return splitted;
}

