#include <iostream>
#include <map>
#include <string>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int n, m; 
    string name, ip;
    map < string, string > mp;


    cin >> n >> m;

    for( int i = 0; i < n; i++ ){
      cin >> name >> ip;
      ip += ";";
      mp[ ip ] = name;
    }
    
    for( int i = 0; i < m; i++ ){
      cin >> name >> ip;
      cout << name << " " << ip << " #" << mp[ip] << endl; 

    }
    
    return 0;
}
