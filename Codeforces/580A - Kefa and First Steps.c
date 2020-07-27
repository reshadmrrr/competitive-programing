#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int a[n], i;
    for( i = 0; i < n ; ++i ){
        scanf("%d", &a[i]);
        if( i > 0 && a[i - 1] > a[i] ) cnt++;
    }
    printf("%d\n", cnt);

    return main();
}
