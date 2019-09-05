#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define stacksize 5


void push(int i);
int pop(void);
int *p1,*tos,stack[stacksize];


main()
{
  int value;

  p1=stack;
  tos=p1;

do
{
    printf("enter a number (-1 for quit,0 for pop):");
    scanf("%d",&value);

    if(value!=0)
        push(value);
    else printf("this is it %d\n",pop());
}
   while(value!=-1);

return 0;
}


void push(int i)
{
    p1++;
    if(p1==(tos+stacksize))
    {
        printf("stack overflow");
        exit(1);
    }
    *p1=i;
}



int pop(void)
{
    if(p1==tos)
    {
      printf("stack underflow");
      exit(1);
    }

    p1--;

 return *(p1+1);

}
