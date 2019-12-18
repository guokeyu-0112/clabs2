#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    double a[100];
    int i=0;
    a[0]=atof(argv[1]);
    a[1]=atof(argv[2]);
    a[2]=atof(argv[3]);
    a[3]=atof(argv[4]);
    a[4]=atof(argv[5]);
    a[5]=atof(argv[6]);
    double min=a[0];
    for(i=0;i<6;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%.2f\n",min);
}