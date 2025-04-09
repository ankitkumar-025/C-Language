#include<stdio.h>
float arsquare(float side);
float arrect(float len,float b);
float arcircle(float radius);
int main()
{
    float side;
    printf("enter side:");
    scanf("%f",&side);x
    float len,b;
    printf("\nenter len and b:");
    scanf("%f %f",&len ,&b);
    float radius;
    printf("\nenter rad:");
    scanf("%f",&radius);

   float r= arsquare(side);
   printf("area of sqaur is %f",r);
   float a= arrect(len,b);
    printf("\narea of rectangle is %f ",a);
   float ar= arcircle(radius);
    printf("\narea of circle is %f",ar);

}
 float arsquare(float side)
 {
    int r=side*side;
    return r;
 }

 float arrect(float len,float b)
 {
    int a=len*b;
    return a;
 }
 float arcircle(float radius)
 {
    int ar=3.14*radius*radius;
    return ar;
 }
