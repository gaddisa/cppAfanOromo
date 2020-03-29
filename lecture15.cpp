#include<iostream.h>
int search(int x[],int start, int end,int n)
{
 if(start<=end)
  {
   int mid=(start+end)/2;
  if(x[mid]==n)
    {
	return mid;
	}
  if(x[mid]>n)
   {
   
    
	 return search(x,start,mid-1,n);
   }
   if(x[mid]<n)
   {
	  return search(x,mid+1,end,n);
   }
  
   }
  
 return -1;
}
int main()
{
  
  int x[]={1,2,3,4,5,6};
  int nn=2;
  
  int r=search(x,0,5,nn);
  if(r==-1)
   cout<<"Hin jiru";
   else
   cout<<"eyyen ni jira"<<r;
  
  
}

