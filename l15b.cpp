#include<iostream.h>

int barbadi_ls(int x[],int size,int n);

int main()
{
  int x[]={1,2,3,4,5,6};
  
  int n;
  cout<<"enter your id"<<endl;
  cin>>n;
  int deebii=barbadi_ls(x,6,n);
  
  if(deebii==-1)
    cout<<"Hattuu deemi asiiti"<<endl;
  else
    cout<<" Seeniboo"<<endl;
  

return 0;
}
int barbadi_ls(int x[],int size,int n)
{
  for(int i=0;i<size;i++)
  {
    if(x[i]==n)
	return i;
  }
  return -1;
}

