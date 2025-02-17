#include<stdio.h>
int main()
{
   int N,i,result;
   scanf(" %d",&N);
  
   for(i=1;i<=10;i++)
   {
     result = N*i;
    printf("%d * %d = %d",N,i,result);  
   }
   return 0;
}