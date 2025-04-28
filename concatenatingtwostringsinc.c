//C PROG TO CONTENATING TWO STRINGS WITHOUT USING Strcat//
#include<stdio.h>
int main()
{
   //get the two strings to be concatenated
    char str1[100]="ANKIT";
    char str2[100]="KUMAR";
    //declare a new strings to store the concatenated string

    char str3[100];
    int i=0;ssssss
    int j=0;
    printf("\n first string is: %s",str1);
    printf("\nsecond string is: %s",str2);
    //insert the first string in the new string
     while(str1[i]!='\0'){
        str3[j]=str1[i];
        i++;
        j++;

        
     }
     //insert the second string in the new string

     i=0;
     while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;
        j++;

     }
     str3[j]='\0';
     //print the concatenated string

     printf("\nconcetenated string:%s",str3);
     return 0;
}



