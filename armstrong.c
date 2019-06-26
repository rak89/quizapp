/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int n,t,a,b,s=0;
 printf("enter no");
 scanf("%d",&n);
 t=n;

 printf("%d\n",b);
 while(n>0)
 {
    a= n%10;
    b=a*a*a;
    
    s=s+b;
    n=n/10;
 }
 if(s==t)
 {
     printf("no is armstrong");
     
 }
 else
      printf("no is not armstrong");


    return 0;
}
