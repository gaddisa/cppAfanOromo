#include<iostream.h>
#include<fstream.h>

void galmessituu();
void mullistuu();
void barbadduu();
void menu();

struct Galmee{
     
	 char maqaa[20];
	 int umurii;
  
}x[100];

int main()
{

 cout<<"Baga nagaan gara Software Keenya dhuftan"<<endl;
 cout<<"############################################"<<endl;
 cout<<"\t\t JImma Hospital"<<endl;
 menu();
return 0;
}
void menu()
{
  cout<<"############################################"<<endl;
  cout<<"\tMenu: Filannookee sensisi"<<endl;
  cout<<"\t Nama haaraa galmessuuf 1 sensisi"<<endl;
  cout<<"\t Kan galamahe jiru barbaduuf 2 sensisi"<<endl;
  cout<<"\t Nama galmahe hunda baasuf 3 sensis"<<endl;
  cout<<"\t Cufuu yoo feete 4 sensisi"<<endl;
  
  int c;
  cout<<"Finannoke =";
  cin>>c;
  
  switch(c)
  {
  case 1: galmessituu();break;
  case 2: barbadduu();break;
  case 3:mullistuu();break;
  case 4: exit(0);break;
  default: cout<<"Filannonkee dogoggora irra debihii yaali"<<endl;
  }
  cout<<"############################################"<<endl;
  menu();
  
}
void galmessituu()
{
 
 int n;
  cout<<"############################################"<<endl;
 cout<<" \nDhukkubsataa meeqa galmessuu barbaaddaa?";
 cin>>n;
 
 ofstream myfile;
 myfile.open("galmee.txt",ios::app);
 
 for(int i=0;i<n;i++)
 {
    cin.ignore();
	cout<<"Maqaa dhukkubsataa sensisi"<<endl;
	gets(x[i].maqaa);
	cout<<"Umuriin isaa/ishee hoo?"<<endl;
	cin>>x[i].umurii;
    
	myfile<<x[i].maqaa<<" "<<x[i].umurii<<"\n";
 }
 myfile.close();
 
 menu();

}

void barbadduu()
{
   cout<<"############################################"<<endl;
  char xx[20];
  cin.ignore();
  cout<<"Maqaa dhukkubsata isa barbadduu sensisi"<<endl;
  gets(xx);
  
  ifstream myfile;
  myfile.open("galmee.txt",ios::in);
  
  char name[20];
  int age;
  
  int cc=0;
  
  if(myfile.is_open())
  {
  
      while(myfile>>name>>age)
	  {
	  
	    if(strcmp(xx,name)==0)
		{
		   cc=1;
		   cout<<"Nami maqaan isaa "<<name<<" tahe galmahee jira umuriin isaa="<<age<<endl;
		
		}
	  }
      
	  
  }
  myfile.close();
  if(cc==0)
	    cout<<" Hin galmofne"<<endl;
  menu();
  
}
void mullistuu()
{
 cout<<"############################################"<<endl;
 char name[20];
  int age;
 ifstream myfile;
 myfile.open("galmee.txt",ios::in);
  
  if(myfile.is_open())
  {
      cout<<"\nMaqaa"<<"\t"<<"Umurii"<<endl;
      while(myfile>>name>>age)
	  {
	     cout<<name<<"\t"<<age<<"\n";
	  
	  }
  }
  myfile.close();
  menu();
}

