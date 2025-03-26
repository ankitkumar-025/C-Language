#include<stdio.h>
int main()
{ 
    int totalmarks=500;
    float m1=98;//maths marks
    float m2=97;//physics marks
    float m3=100;//eng
    float m4=78;//chem
    float m5=99;//bio
    
    float percentage=(m1+m2+m3+m4+m5)/totalmarks;
    printf("Percentage of 5 subjects is: %f",percentage);
    return 0;
}
