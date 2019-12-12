#include <stdio.h>
int sum(int year,int month,int day)
{
    unsigned char x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i,s=0;
    for(i=1;i<year;i++)
    if((i%4==0&&i%100!=0)||i%400==0)
    s+=366;
    else
    {
        s+=365;
    }
    if((year%4==0&&year%100!=0)||year%400==0)
    x[2]=29;
    for(i=1;i<month;i++)
    s+=x[i];
    s+=day;
    return s;   
}
int main()
{
    unsigned char year1,month1,day1,year2,month2,day2;
    int s1,s2;
    printf("please enter the first date:");
    scanf("%hhd%hhd%hhd",&year1,&month1,&day1);
    printf("please enter the second date:");
    scanf("%hhd%hhd%hhd",&year2,&month2,&day2);
    s1=sum(year1,month1,day1);
    s2=sum(year2,month2,day2);
    if(s1>s2)
    printf("%d\n",s1-s2);
    else
    {
        printf("%d\n",s2-s1);
    }
    
}