#include<iostream.h>

int main()
{
  int a,b;
  cout<<"Lakkofsa jalqabaa sensisi"<<endl;
  cin>>a;
  
  cout<<"Lakkofsa lammataa sensisi"<<endl;
  cin>>b;
  
  char choice;
  cout<<"Malojjechu barbadda"<<endl;
  cin>>choice;
  
  switch(choice)
  {
     case '+': cout<<"Idaun="<<a+b<<endl; 
	           break;
	 case '-': cout<<"Hirrisuun="<<a-b<<endl;
	           break;
	 case '*': cout<<"Bayisun"<<a*b<<endl;
	            break;
     default : cout<<"Wanni sensiste dogoggora";break;
  
  }


}

