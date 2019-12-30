#include <stdio.h>
#include <string.h>
int main()
{
  int i,length;
 char max,string[100];
 while(gets(string)!=NULL)
 {
     length=strlen(string);
        max=string[0];
  for(i=0; i<length; i++)
  {
      if(string[i]> max)
      max= string[i];
  }
  for(i=0; i<length; i++)
  {  
   printf("%c", string[i]);
      if(max== string[i])
      printf("(max)");
  }
  printf("\n");
 }
    return 0;
}
