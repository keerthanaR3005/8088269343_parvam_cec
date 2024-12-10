/*c program to generate fibinocci numbers*/
#include<stdio.h>
int main()
{
    int n=0,f1=1,f2=2;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
int f3=f1+f2;
printf("%d\n",n);
f1=f2;
f2=f3;
    }
    return 0;
}