#include <iostream>
#include <map>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;

    int n;
    string s;
    map < string, int > mp;

    cin >> n;

    while( n-- ){
      cin >> s;
      if( mp[s] == 0 ){
        cout << "OK\n";
        mp[s]++;
      }
      else{
        cout << s << mp[s] << endl;
        mp[s]++;
      }
    } 
    
    return 0;
}
