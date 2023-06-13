#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct people
{
   char names[10];
   int  age;
   int  height;
   int  id;
}boy;



``` c
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

   struct people p1,p2;
   strcpy(p1.names, "Tom");
   p1.age=10;
   printf("First Person's name  is %s\n",p1.names);
   printf("First Person's age   is %d years old",p1.age);
   




}
```

