#include<stdio.h>
void main()
{
int n,p,i=0;
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
if(n%i==0)
{
i=1;
}
}
if(i==0)
printf("%d prime number\n",n);
else
printf("%d not a prime number",n);
getch();
}
