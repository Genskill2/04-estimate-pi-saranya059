#include<stdio.h>
#include<math.h>

float wallis_pi(int);
void main()
{
int n;
float pie;
printf("enter n value\n");
scanf("%d",&n);
pie=2*wallis_pi(n);
printf("%.6f",pie);
}
float wallis_pi(int n)
{
int i;
float pi=1,numerator,denominator,temp;
for(i=1;i<=n;i++)
 {
  numerator=(4*(i*i));
  denominator=(4*(i*i)-1);
  temp=numerator/denominator;
  pi=pi*temp;
 }
 return pi;
}

