#include<stdio.h>
int main(){
  int n;
  printf("Enter a Limit: ");
  scanf("%d",&n);
  int a=0,b=1,c,i;
  printf("0 1 ");
  for(i=2;i<n;i++){
     c=a+b;
     printf("%d\t",c);

     a=b;
     b=c;

     }
    }

