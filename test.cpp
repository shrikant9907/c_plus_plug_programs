#include<stdio.h>

int main(){

 int find_factorial();
 int factorial = find_factorial();

 

return(0);
}

int find_factorial(){

  int n,f=1,i;
  int a[5]; 
  printf("Enter a number to find factorial: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
   f =f*i;
  }

  int a[1] = {n};
  int a[1] = f;
  
 return a;
}
