#include <stdio.h>
#define MAX 101
void reverse(int *input,int num)
{
    if(num>1){
        int c=*(input+num-1);
        *(input+num-1)=*input;
        *input=c;
        reverse(input+1,num-2);
    }
}
int main()
{
    int input[MAX];
    for(int i=0;i<MAX;i++){
        input[i]='\0';
    }
    int len=0;
    int c=getchar();
    while(c!='\n'&&c!=EOF)
    {
        input[len]=c;
        len++;
        if(len>=MAX){
            printf("the input is too long");
            return 0;
        }
        c=getchar();
    }
    reverse(input,len);
    printf("the inverted sentence is: \n");
    for(int i=0;i<len;i++)
    {
        printf("%c",input[i]);
    }
    printf("\n");
} 
