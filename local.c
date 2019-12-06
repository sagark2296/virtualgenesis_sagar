 #include<stdio.h>
void test(void);
int x=100,g=200;
int main() 
{
  y=400;
  ++x;
  ++g;
  printf("x=%d,y=%d,g=%d\n",x,y,g);
  test();
  printf("g=%d\n",g);
  return 0;
}
void test()
{
 int z=500;
 printf("x=%d,z=%d,g=%d\n",x,z,g);
 g=600;
}
