#include<iostream.h>

int sum(int a, int b);
int sum(float a, int b);
int sum(int a, int b, int c);

int main()
{

  float a=10;
  int b=5;
  int c=20;
  cout<<"Sum="<<sum(a,b)<<endl;
  cout<<"Sum="<<sum(a,b,c)<<endl;
return 0;
}

int sum(int a, int b)
{
  return a+b;
}

int sum(int a, int b, int c)
{

   return a+b+c;
}
int sum(float a, int b)
{

  return a*b;
}

