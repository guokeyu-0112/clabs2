#include <stdio.h>
#include <string.h>
char* reverse(char *x)
{
    int len=strlen(x);
    int i,n=len/2;
    char tem;
    for(i=0;i<=n;i++)
    {
        tem=x[i];
        x[i]=x[len-1-i];
        x[len-1-i]=tem;
    }
    return x;
}
int main()
{
    char str[100];
    printf("input a string:");
    gets(str);
    puts(reverse(str));
    return 0;
}