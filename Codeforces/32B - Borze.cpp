#include <iostream>
#include <vector>


using namespace std;

int main()
{
    string a;
    cin >> a;
    vector <int> v;

    int len = a.length();

    for(int i = 0; i < len; ++i){
        if(a[i] == '-' && a[i+1] == '.'){
            v.push_back(1);
            a[i] = '0';
            a[i+1] = '0';
        }

        else if(a[i] == '-' && a[i+1] == '-'){
            v.push_back(2);
            a[i] = '0';
            a[i+1] = '0';
        }

        else if( a[i] == '.')
            v.push_back(0);
    }
    int vlen = v.size();

    for(int i = 0; i < vlen; ++i){
        cout << v[i];
    }

    return 0;
}
