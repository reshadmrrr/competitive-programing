#include <iostream>
#include <string>

using namespace std;
int isLow(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        return 1;
    else
        return 0;
}
char low(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ( ch + 'a' - 'A' );
    else return ch;
}
char Up(char ch)
{
     if(ch >= 'a' && ch <= 'z')
        return (ch - 'a' + 'A');
        else
            return ch;
}
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int l = 0, u = 0;

    for( int i = 0; i < sz; ++i){
        if(isLow(s[i]) == 1) l++;
        else u++;
    }
    if( l >= u ){
            for( int i = 0; i < sz; ++i){
                    s[i] = low(s[i]);
    }
    }
    else
        for( int i = 0; i < sz; ++i){
            s[i] = Up(s[i]);
        }

    cout << s << endl;


    return 0;


}
