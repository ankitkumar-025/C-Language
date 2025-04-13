#include<stdio.h>
#include<math.h>
int square(int num);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    square(num);bv


}
int square(int num)
{
    int result=num*num;
    printf("Square of the given no is: %d",result);
    }
