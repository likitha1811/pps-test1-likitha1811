#include<stdio.h>
int input(int *a,int *b,int *c)
{
  printf("enter three numbers\n");
  scanf("%d %d %d",a,b,c);
  return 0;
}
void cmp(int a,int b,int c,int *large)
{
  if(a>b && a>c)
  *large=a;
  else if(b>c)
  *large=b;
  else
  *large=c;
}
void output(int largest)
{
  printf("tha largest number is %d",largest);
}
int main()
{
  int a,b,c,result;
  input(&a,&b,&c);
  cmp(a,b,c,&result);
  output(result);
  return 0;
}