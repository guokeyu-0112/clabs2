#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    double a[100];
    int i=1,j=0,x=0;
    double temp;
    for(i=1;i<argc;i++,j++){
        a[j]=atof(argv[i]);
    }
    for(x=0;x<argc-2;x++){
        if(a[x]<a[x+1])
        {
            temp=a[x];
            a[x]=a[x+1];
            a[x+1]=temp;
        }
    }
    printf("the min is:%g\n",a[argc-2]);
    return 0;
}