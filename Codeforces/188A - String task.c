#include<stdio.h>
#include<string.h>

int main()
{
	char s[101] ;
	int i , l ;

	gets(s);

	l=strlen(s);

	for( i = 0 ; i < l ; i++ )
	{
		if( s[i] >= 65 && s[i] <= 92 )
			s[i] = s[i] + 32 ;
		if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' || s[i]=='y' )
            continue;
		else
            printf(".%c", s[i]);
	}
	return 0;
}

