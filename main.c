#include <stdio.h>
#include <string.h>
#define DB_Size(s)              (s->length+16)
typedef unsigned long           u64;  //size=4
typedef unsigned int            u32;  //size=4
typedef	unsigned short          u16;  //size=2
typedef unsigned char           u8;   //size=1
typedef u16                     ALENGTH_T;
int f=99,g;
u8 tempData[180];
u16 unQueuedLength;
u8 s[20]="aaabbbcccde";
char s1[3]="fyn";

char  NV_Config_Static[959984709];
char  *NV_Config_File      = NV_Config_Static;
char *srce="1";

typedef struct {
  char mask[4];
  int length;
  int curr_pos;
  char reserved[4];
  char data[65536-16];
} FILES;
int main ()
{
    memcpy(tempData,s,sizeof(u16)+unQueuedLength);
    if (0x4000==16384)
      s1[3]='\0';
      FILES *f = (FILES *)srce;
      FILES *j,*p;
      printf("%d\n",sizeof(NV_Config_File));  //size of a pointer
      printf("%d\n",sizeof(f));
      printf("%d\n",sizeof(f->mask));
      printf("%d\n",DB_Size(f));
      printf("%d\n",DB_Size(p));
      memcpy(NV_Config_File, srce, 959984709);
      printf("%s\n",NV_Config_File);
      
}