#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        
    }
    printf("The sum of the no is %d\n",sum);o

for(int i=n;i>=1;i--)
{
    printf("%d\n",i);
}
}
