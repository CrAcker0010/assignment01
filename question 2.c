#include<stdio.h>
int main()
{
int n,a1,a2,a3,p1,p2,p3,w1,w2,w3,d1,d2,d3,c1,c2,c3;
printf("deposit money in account1\n");
scanf("%d",&a1);
printf("deposit money in account2\n");
scanf("%d",&a2);
printf("deposit money in account3\n");
scanf("%d",&a3);
printf("select account\n");
printf("1.account1\n");
printf("2.account2\n");
printf("3.account3\n");
scanf("%d",&n);
switch (n)
{
case 1:printf("1.withdrawl\n");
printf("2.deposit\n");
printf("3.check\n");
scanf("%d",&p1);
if(p1==1)
{
printf("enter amount\n");
scanf("%d",&w1);
printf("balance:%d\n",a1);
printf("money withdrawl:%d\n",w1);
int newamount1=a1-w1;
printf("Current balance:%d\n",newamount1);
}
else if(p1==2)
{
printf("enter amount\n");
scanf("%d",&d1);
printf("balance:%d\n",a1);
printf("money deposit:%d",d1);
int newamount2=a1+d1;
printf("Current balance:%d\n",newamount2);
}
else if(p1==3)
{
printf("current balance:%d\n",a1);
}
break;
case 2:printf("1.withdrawl\n");
printf("2.deposit\n");
printf("3.check\n");
scanf("%d",&p2);
if(p2==1)
{
printf("enter amount\n");
scanf("%d",&w2);
printf("balance:%d\n",a2);
printf("money withdrawl:%d\n",w2);
int newamount1=a2-w2;
printf("Current balance:%d\n",newamount1);
}
else if(p2==2)
{
printf("enter amount\n");
scanf("%d",&d2);
printf("balance:%d\n",a2);
printf("money deposit:%d\n",d2);
int newamount2=a2+d2;
printf("Current balance:%d\n",newamount2);
}
else if(p2==3)
{
printf("current balance:%d\n",a2);
}
break;
case 3:printf("1.withdrawl\n");
printf("2.deposit\n");
printf("3.check\n");
scanf("%d",&p3);
if(p3==1)
{
printf("enter amount\n");
scanf("%d",&w3);
printf("balance:%d\n",a3);
printf("money withdrawl:%d\n",w3);
int newamount1=a3-w3;
printf("Current balance:%d\n",newamount1);
}
else if(p3==2)
{
printf("enter amount\n");
scanf("%d",&d3);
printf("balance:%d\n",a3);
printf("money deposit:%d\n",d3);
int newamount2=a3+d3;
printf("Current balance:%d\n",newamount2);
}
else if(p3==3)
{
printf("current balance:%d\n",a3);
}
break;
}
return 0;
}
