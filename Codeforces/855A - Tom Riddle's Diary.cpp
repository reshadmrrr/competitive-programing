#include <iostream>
#include <map>



using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int n;
    string name;
    cin >> n;
    map < string, int > mp;
    
    while( n-- ){

      cin >> name;
      if( mp[name] != 1 ){
        cout << "No\n";
        mp[name] = 1;
      } 
      else
        cout << "Yes\n";
    

}
    return 0;
}
