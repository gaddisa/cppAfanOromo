#include<iostream.h>

int idai(int a, int b);
int bayisi(int a, int b);
void menu();


int main()
{
   
 menu();
 return 0;
 
 }
 
void menu()
{
  cout<<"\nBaga nagan dhufte"<<endl;
  cout<<" Menu List"<<endl;
  cout<<" Idaudhaaf mallattoo + tuqi"<<endl;
  cout<<" Bayisuuf mallattoo * tuqi"<<endl;
  cout<<" Sw kana cufudhaaf mallattoo x tuqi"<<endl;
  
  char choice;
  cin>>choice;
  int a, b;
  cout<<" Lakkosa jalqabaa sensisi"<<endl;
  cin>>a;
  cout<<" Lakkosa lammataa sensisi"<<endl;
  cin>>b;
  
  switch(choice)
  { 
    case '+': cout<<"Ida'amni ="<<idai(a,b)<<endl;menu();break;
    case  '*': cout<<"Bayisun="<<bayisi(a,b)<<endl;menu();break;
	
	default: cout<<"irra debi'ii yaali"<<endl;menu();break;
  } 
  


}
 
int idai(int a, int b)
{

   return a+b;
}
int bayisi(int a, int b)
{
  return a*b;
}

