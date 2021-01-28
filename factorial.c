#include<stdio.h>
int main(){
int a,i,b=1;
printf("please enter the value of the number: ");
scanf("%d", &a);
if(a<0)
{
printf("please enter the +ve value");
}
else
{
for(i=1; i<=a; i++)
{
b*=i;
}
printf("the value of the factorial of the number %d is %d" a,b);
}
}
