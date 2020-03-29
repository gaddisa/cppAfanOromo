#include<iostream.h>

struct Barataa
{
   int umurii;
   char maqaa[25];
   char department[20];
	   
}barataa[10];

int main()
{
  int n;
  cout<<"Barataa meeqa galmessuuu barbaaddaa?"<<endl;
  cin>>n;
 
  for(int i=0;i<n;i++)
  {
     cout<<"Umurii barataa sensisi"<<endl;
	 cin>>barataa[i].umurii;
	 cin.ignore();
	 cout<<"Maqaa barataa"<<endl;
	
	 gets(barataa[i].maqaa);
	 //cin.ignore();
	 cout<<"department barataa"<<endl;
	 
	 gets(barataa[i].department);
  }
  
  cout<<"List barattoota galmahani kan arman gadiiti"<<endl;
  
  for(int i=0;i<n;i++)
  {
    cout<<barataa[i].maqaa<<'\t'<<barataa[i].department<<'\t'<<barataa[i].umurii<<endl;
  
  }
  
  

 return 0;
}

