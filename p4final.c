#include <stdio.h>
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else
  if(b>c)
  return b;
  else
  return c;
}
int input()
{
  int x;
  printf("enter three values to be compared\n");
  scanf("%d",&x);
  return x;
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  printf("the largest value is %d\n", cmp(a,b,c));
  return 0;
}