// a)	Write a program to insert/delete in linear array at specific position.

#include<stdio.h>
int main()
{
int a[10],i,j,n,pos,val;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter the position :");
scanf("%d",&pos);
printf("enter the value that you want to add:");
scanf("%d",&val);
for(i=n-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=val;
printf("\n the new array is:\n");
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
}
