#include<stdio.h>




struct node {

int data;

};

int add ()
{

int a;
printf ("pelase enter a number\n");
scanf("%d",&a);

return a;
}



void display (struct node node1[10], int pos)
{
  for(int i=0 ;i<pos; i++)
  {
    printf("\nposition number %d: %d\n",i,node1[i].data);
  }
}



int main (int argv, char *agrc[])
{

struct node node1[10];
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
  display(node1,i);
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
