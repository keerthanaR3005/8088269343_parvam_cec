/*1 4 9 10 25...n*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    if(i%4!=0)
    printf("%d\n",i*i);
    return 0;
}