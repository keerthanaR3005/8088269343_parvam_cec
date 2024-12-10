#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("first %d natural numbers are\n",n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
        printf("%d ",i);
    }
    printf("the sumetion of %d is %d",n,sum);
    return 0;

}