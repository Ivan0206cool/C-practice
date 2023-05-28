#include <stdlib.h>
#include <stdio.h>


int main(){
   int age; 
   char name[50],sex[10];

   printf("Enter your name:");  
   scanf("%s",name);   
   fflush(stdin);    // 清除輸入緩衝區

   printf("Enter your age:");
   scanf("%d",&age);  
   fflush(stdin);    // 清除輸入緩衝區

   printf("Enter your sex :");  
   scanf("%s",sex);   
   
   printf("your input sex is :%s\n",name);
   printf("your input age is :%d\n",age);
   printf("your input sex is :%s\n",sex);



}
 

