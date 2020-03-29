#include<iostream.h>

int main()
{
  
    
  int x[3][2]={{1,2},{3,4},{5,6}};
  int y[3][2]={{2,3},{5,6},{4,1}};
  
  int sum[3][2]={};
  
  for(int i=0;i<3;i++)   
     {
	   for(int j=0;j<2;j++)
	   {
	     sum[i][j]=x[i][j]*y[i][j];
	   }
	   cout<<endl;
	 }
  
  cout<<" The multi of two matrix "<<endl;
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

