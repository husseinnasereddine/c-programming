#include<stdio.h>



#define NODE 1
typedef struct node {
int data;
} node;






int add ()
{
int a;
printf ("pelase enter a number\n");
scanf("%d",&a);
return a;
}



void display (node *node1, int pos)
{
  for(int i=0 ;i<pos; i++)
  {
    printf("\nposition number %d: %d\n",i,(node1[i]).data);
  }
  // a[i]=*(a+i)
}
int main (int argv, char *agrc[])
{
node node1[10];
int i=0;
int option =0;
do{
  printf("\nplease choose option 1 | 2 | 3\n");
  scanf("%d",&option);

switch(option)
{
  case 1:
  node1[i].data=add();
  i++;
  break;

  case 2:
  display(&node1[1],i);
  break;

  case 3:
  break;

  default:
  printf("\nchoose the right option\n");
  break;
}
}while(option != 3);
return 0;
}
