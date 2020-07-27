#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[100];
    int flag = 0;

    gets(a);

    for(int i = 0; i < strlen(a); i++){
        if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            cout<<"YES"<<endl;
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;

    return 0;
}
