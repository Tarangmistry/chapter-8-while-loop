#include<stdio.h>
int main()
{
  int i ; 
  int t ;
  
  printf("enter the value" );
  scanf("%d",&i);

  
  printf("enter the value" );
  scanf("%d",&t);

  while(i>=t){
    printf("%d\n",i);
    i=i-4;
  }
} 