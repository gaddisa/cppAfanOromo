#include<iostream.h>

int main()
{
   
   cout<<" Dire Dawa University Registrar System"<<endl;
   
   char password[8]="abcd123";
   
   char kanalaagalu[8];
   
   cout<<"Barsiisa password kee sensisi"<<endl;
   cin.get(kanalaagalu,8);
   
   if(strcmp(password,kanalaagalu)!=0)
    exit(0);
   
   float qabxii;
   
   char grade;
   
   cout<<"Barsiisa qabxii barataa sensisi"<<endl;
   cin>>qabxii;
   
   if(qabxii>=85)
	  grade='A';
   else
      if(qabxii>=70)
	  grade='B';
	  
   else
   	  if(qabxii>=60)
	  	grade='C';
	else
		if(qabxii>=50)
		 grade='D';
	else
	   grade='F';
	   
	cout<<"Grade barataa kanaa="<<grade;


return 0;
}

