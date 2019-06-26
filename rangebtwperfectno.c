/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,temp,n,i,s,j;
    printf("enter number between want to print ");
    scanf("%d %d",&a,&b);
    n=a+1;
    printf("perfect number between %d and %d are\n",a,b);
    for(j=n;j<b;j++)
    {
        temp=n;
        s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
         {
             s=s+i;
         }
    }
    
    if(temp==s)
    {
        printf("%d  ",s);
    }
    n++;
    }
    return 0;
}
