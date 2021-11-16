#include<stdio.h>
#include<conio.h>
void main()
{
int flag=0;
int a[5]={0,1,2,3,4};
int i,key;
printf("enter key");
scanf("%d",&key);
for(i=0;i<5;i++)
{
if(key==a[i])
{
flag=1;
break;
}
}
if(flag==1)
{
    printf("element found");
}
else
{
    printf("element not found");
}
}