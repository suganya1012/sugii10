#include<stdio.h>
int main(){
  int i,g=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
     g=g*i;
 
  printf("Factorial of %d is: %d",num,g);
  return 0;
}
