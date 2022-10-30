#include<stdio.h>
#include<math.h>
int main()
{
int n,sum=0,rem,o,c=0,p,r;
printf("Enter the number\n");
scanf("%d",&n);
o=n;
p=n;
while(n!=0)
{
r=n%10;
c++;
n=n/10;
}
while(p!=0)
{
rem=p%10;
sum=sum+pow(rem,c);
p=p/10;
}
if(sum==o)
printf("%d is an Armstrong number\n",o);
else
printf("%d is not an Armstrong number\n",o);
return 0;
}
