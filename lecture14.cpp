#include<iostream.h>

int swap(int &a, int &b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
}

int tartibessi(int x[6])
{
   int tiqqoo;
   int n=5;
   for(int i=0;i<n-1;i++)
   {
      tiqqoo=i;
	  
	  for(int j=i+1;j<n;j++)
	  {
	     if(x[j]<x[tiqqoo])
		  tiqqoo=j;
	  }
       swap(x[tiqqoo],x[i]);
   }

}


int main()
{
  int x[]={5,1,3,2,4};
  
  cout<<"Kan dura ture"<<endl;
  for(int i=0;i<5;i++)
    cout<<x[i]<<",";
  
  
  tartibessi(x);
   cout<<"\nEga Toora galee waninni fakkatu"<<endl;
  for(int i=0;i<5;i++)
    cout<<x[i]<<",";
  
  
  
return 0;
}

