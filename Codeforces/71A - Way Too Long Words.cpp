#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int t;
    
    scanf("%d", &t);
    gets(str);
    
    while(t--){
        
		gets(str);
        if(strlen(str)> 10) printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str)-1]);
        else puts(str);

    }

    return 0;
}
