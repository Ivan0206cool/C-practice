#include <stdlib.h>
#include <stdio.h>


int main(){
   int age;
   char sex; 
   printf("Enter your age:");
   scanf("%d",&age);
   printf("your input age is :%d\n",age);

   fflush(stdin);    // �M����J�w�İ�

   printf("Enter your sex (B or G):");  
   scanf("%c",&sex);   
   printf("your input sex is :%c",sex);
}
 

