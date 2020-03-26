#include<stdio.h>
float add(float a,float b)
{
return a+b;
}

float sub(float a,float b)
{
return a-b;
}

float mul(float a,float b)
{
return a*b;
}

float div(float a,float b)
{
return a/b;
}

int main()
{
float a,b,d;
char c;
float (*ptr)(float,float);
printf("enter a\n");
scanf("%f",&a);
printf("enter b\n");
scanf("%f",&b);
printf("enter acharacter\n");
scanf("\n%c",&c);
switch(c)
{
case '+':ptr=add;
	 d=ptr(a,b);
	 break;

case '-':ptr=sub;
	 d=ptr(a,b);
	 break;

case '*':ptr=mul;
	 d=ptr(a,b);
	 break;

case '/':ptr=div;
	 d=ptr(a,b);
	 break;
}
printf("result:%f\n",d);
}
