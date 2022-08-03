/*Eg 1: Input: a1b10
       Output: abbbbbbbbbb
Eg: 2: Input: b3c6d15
          Output: bbbccccccddddddddddddddd
The number varies from 1 to 99.
*/




#include<stdlib.h>
#include<stdio.h>
int main(void)
{
char str[100],last;
int l=0,i,n=0,arr[l],k=0;
printf("Enter the string  : ");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{
  if(str[i]>=48 || str[i]<=57)
  {
    k = (int)str[i+1] - 48;
    for(int j=0; j<k;j++){
      printf("%c",str[i]);
  }
  }
  i++;
}

}
