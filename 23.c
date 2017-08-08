#include<stdio.h> 
int hcf(int x,int y); 
void main() 
{ 
    int i,j,k; 
    clrscr(); 
    printf("Enter 2 Numbers : "); 
    scanf("%d%d",&i,&bj 
    if(i>j) 
      { 
           k=hcf(i,j); 
      } 
    else 
     { 
           k= hcf(j,i); 
     } 
           printf("HCF is= %d",k); 
           getch(); 
} 
    int hcf(int x,int y) 
    { 
       int r=1; 
       while(r!=0) 
          { 
               r=x%y; 
               x=y; 
               y=r; 
          } 
               return(x); 
    }  
