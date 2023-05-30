#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct animal
{
   char names[10];
   int  age;
}dog;




int main(){
   int age; 
   char name[50],sex[10];

   // printf("Enter your name:");  
   // scanf("%s",name);   
   // fflush(stdin);    // 清除輸入緩衝區

   // printf("Enter your age:");
   // scanf("%d",&age);  
   // fflush(stdin);    // 清除輸入緩衝區

   // printf("Enter your sex :");  
   // scanf("%s",sex);   
   
   // printf("your input sex is :%s\n",name);
   // printf("your input age is :%d\n",age);
   // printf("your input sex is :%s\n",sex);

   int *p;
   p=(int *)(malloc(sizeof(int)));
   printf("%d\n",&p);
   free(p);

   struct animal dog,cat;
   strcpy(dog.names, "Tom");
   dog.age=1;
   printf("my dog's name  is %s\n",dog.names);
   printf("my dog's age   is %d year old",dog.age);




}
 

