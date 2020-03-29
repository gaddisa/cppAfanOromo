#include<iostream.h>
int barbaadduu_bs(int x[],int start, int end,int n);
int main()
{
  int x[]={1,20,40,45,50,60};//database id barataa
  
  int n;
  cout<<"Id kee sensisi"<<endl;
  cin>>n;
  
  int deebii=barbaadduu_bs(x,0, 6,n);
  
  if(deebii==0)
    cout<<" Ati hin galmoofnee database irra hin jirtu";
  else
    cout<<" Seenii Id kee toora "<<++deebii<<" Irratti argama"<<endl;
  
  
  return 0;
}

int barbaadduu_bs(int x[],int start, int end,int n){

    if(start<=end)
	{ 
	
	    int mid=(start+end)/2;
		
		if(x[mid]==n)
		  return mid;
	    if(x[mid]>n)
		  return barbaadduu_bs(x,start,mid-1,n);
		if(x[mid]<n)
		  return barbaadduu_bs(x,mid+1,end,n);
	
	}
   
   return 0;

}

