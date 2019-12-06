#include<stdio.h>
int sum(int,int);
int main() {
  int a,b,c,d;
  a=10;
  b=20;
  c=sum(a,b);
  printf("sum is %d\n",c);
  d=sum(12,15);
  printf("sum is %d\n",d);
  printf("sum is %d\n",sum(18,16));
  return 0;
}
int sum(int x,int y)
{
  int z;
  z=x+y;
  return z;
}
