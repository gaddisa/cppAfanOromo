#include<iostream.h>

int main()
{

  int a[3][2]={1,2,3,4,5,6};
  
  int b[3][2]={0,9,7,5,4,3};
  
  int sum[3][2]={};
  
  for(int i=0;i<3;i++)
   {
   
     for(int j=0;j<2;j++)
	 {
	   sum[i][j]=a[i][j]+b[i][j];
	   cout<<a[i][j]<<" ";
	 }
  
  cout<<endl;
  }
 
  for(int i=0;i<3;i++)
   {
   
     for(int j=0;j<2;j++)
	 {
	   
	   cout<<sum[i][j]<<" ";
	 }
  
  cout<<endl;
  }
  
  

  return 0;
}

