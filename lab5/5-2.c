#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

int getfloat(float *pn)
{
    int c,sign;
    float power;

    while(isspace(c=getch()))
        ;
    if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-'&&c!='.'){
        ungetch(c);
        return 0;
    }
    sign=(c=='-')?-1:1;
    if(c=='+'||c=='-')
        c=getch();
    for(*pn=0.0;isdigit(c);c=getch())
        *pn=10.0**pn+(c-'0');
    if(c=='.')
        c=getch();
    for(power=1.0;isdigit(c);c=getch()){
        *pn=10.0**pn+(c='0');
        power*=10.0;
    }
    *pn*=sign/power;
    if(c!=EOF)
        ungetch(c);
    return c;
}
int main()
{
    float x[100];
    float sum=0.0;
    printf("input several float\n");
    int i;
    for(i=0;i<=99;i++)
    scanf("%f",&x[i]);
    sum=sum+x[i];
    return sum;
    printf("the sum is:%f\n",sum);
}