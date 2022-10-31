#include<stdio.h>
int div(int a, int b);
int main()
{
int n,t1=0,t2=1,t3=0,i;
printf("\n Enter the number of eleements you want to show\n");
scanf("%d",&n);
printf("\nfibonacci series....\n");
for(i=0;i<n;i++)
{
  printf("%d\t",t3);
  t1=t2;
  t2=t3;
  t3=t1+t2;
  
}
printf("\n");
return 0;
}
int div(int a, int b)
{
int c,a=20,b=5;
c=div(a,b);
printf("result is %d\n",c); 
}
"Hello all commit for feature"
