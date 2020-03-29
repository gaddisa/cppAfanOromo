#include<iostream>
#include <string>
using namespace std;
struct Student
{
    char name[25];
    int age;
    char department[20];
    // F for female and M for male
    
}s1[500];
int main()
{

  int n;
  cout<<"How many student to register"<<endl;
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
    cout<<"enter age"<<endl;
	cin>>s1[i].age;
    cout<<"enter the name"<<endl;
	cin.ignore();
	gets(s1[i].name);
   
	cout<<"enter the department"<<endl;
	cin.ignore();
	gets(s1[i].department);
  }
   
  for(int i=0;i<n;i++)
  {
    cout<<s1[i].name<<'\t'<<s1[i].age<<'\t'<<s1[i].department<<endl;
  }
  
  
  

return 0;
}

