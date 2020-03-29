#include<iostream.h>
//#include<string.h>
int main()
{
  
  char password[8]="abcd123";
  
  char input[8];
  cout<<"inter yourpassword";
  
  cin.get(input,8);
  
  if(strcmp(input,password)!=0)
     exit(0);
  
  cout<<"Dire dawa university registrar system"<<endl;
  int score;
  char grade;
  cout<<"Enter the score"<<endl;
  cin>>score;
  
  if(score>=90)
      grade='A';
  else
     if(score>=80)
	  grade='B';
  else
  	if(score>=70)
	  grade='C';
  else
  	if(score>=50)
		grade='D';
  else
     grade='F';

  cout<<"The grade="<<grade;
  

  return 0;
}

