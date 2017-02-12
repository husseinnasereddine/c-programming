#include<stdio.h>

/*hello people*/

int substract (int *a, int *b)
{
return ((*a)- (*b));
}

int mult (int a , int b)
{
return (a*b);
}


int main (int argv, char *argc[])
{
int option,a, b;
do
{
printf("hello, choose an option from the list\n 1-addition\n 2-substraction\n 3-multiplication\n 4-division\n5exit\n ");

scanf ("%d",&option);

switch(option)
{
case 1: 
printf ("enter 2 values\n");
scanf("%d%d",&a,&b);
printf ("%d\n",(a+b));
break;
case 2:
printf ("enter 2 values for subtracting\n");
scanf("%d%d",&a,&b);
printf("%d\n",substract(&a,&b));
case 3:
printf("enter two vars for multiplication\n");
scanf("%d%d",&a,&b);
printf("%d\n", mult(a,b));
break;
case 4:
printf("enter two vars for division\n");
scanf("%d%d",&a,&b);
if(0==b)
{ printf("impossible to divide by 0");
 break;
}

printf("%f\n",((float)a/(float)b));
break;

case 5:
break;


default:
printf("wrong option");

}
}while(option != 5);
}


