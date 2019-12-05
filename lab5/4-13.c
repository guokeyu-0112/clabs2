#include <stdio.h>
#include <string.h>
char* reverse(char *x)
{
    int len=strlen(x);
    int i;
    char c;
    for(i=0;i<=len/2;i++)
    {
        c=x[i];
        x[i]=x[len-i-1];
        x[len-i-1]=c;
    }
    return x;
}
int main()
{
    char s[100];
    printf("input a string:");
    gets(s);
    puts(reverse(s));
    return 0;
} 
