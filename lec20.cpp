#include<iostream.h>
#include<fstream.h>
struct barataa{
   char maqaa[20];
   int umurii;
}x[10];

void galmessitu();
void mullistuu();
void barbadduu();
void menu();
int main()
{
  cout<<"Software Hospitala Kenyaa nagaan dhuftan"<<endl;
  menu();

 return 0;
}
void menu()
{
  cout<<"################################################"<<endl;
  cout<<"Filannooke lakkofsa sensisun mirkanessi"<<endl;
  cout<<"\tmaqaa sensisuf 1 tuqi"<<endl;
  cout<<"\tGalmee baasuf 2 tuqi"<<endl;
  cout<<"\tBarbaaduf 3 tuqi"<<endl;
  cout<<"\tSoftware kana cufuf 4 tuqi"<<endl;
  
  cout<<"Filannokee sensisii mallattoo enter tuqi";
  int c;
  cin>>c;
  switch(c)
  {
    case 1: galmessitu();break;
	case 2: mullistuu();break;
	case 3: barbadduu();break;
	case 4: exit(0);break;
	default: cout<<"Wanti ati sensiste dogoggora";break;
  }
  
  cout<<"################################################"<<endl;
  system ("CLS");
}
void galmessitu()
{
  int n;
  cout<<"Nama meqa sensisu barbaadda"<<endl;
  cin>>n;
  ofstream myfile;
  myfile.open("galmee.txt",ios::app);
  for(int i=0;i<n;i++)
  {
     cin.ignore();
     cout<<"maqaa sensisi"<<endl;
	 gets(x[i].maqaa);
	 cout<<"Umurii sensisi"<<endl;
	 cin>>x[i].umurii;
	 
	 myfile<<x[i].maqaa<<" "<<x[i].umurii<<"\n";
  
  }
  myfile.close();
  menu();

}
void mullistuu()
{
  cout<<"#######################################"<<endl;
  cout<<"Data dhukkubsattoota kanan dura galmahanii jiranii"<<endl;
  ifstream myfile;
  myfile.open("galmee.txt",ios::in);
  char name[20];
  int u;
  if(myfile.is_open()){
  
  while (myfile>>name>>u)
    {
  
        cout << name <<"\t"<<u << "\n";
    }
  }
  myfile.close();
  menu();
}
void barbadduu(){
  char xx[20];
  cout<<"#######################################"<<endl;
  cin.ignore();
  cout<<"Maqaa dhukkubsataa barbadduu sensisi"<<endl;
  gets(xx);
    
  
  ifstream myfile;
  myfile.open("galmee.txt",ios::in);
  char name[20];
  int u;
  
  int cc=0;
  if(myfile.is_open()){
  
  while (myfile>>name>>u)
    {
        if(strcmp(xx,name)==0)
		{
		  cc=1;
		  cout<<" Nami kun galmahee jira umuriin isaa="<<u<<endl;
		}
        
    }
  }
  myfile.close();
  if(cc==0)
     {cout<<"Nami maqaan isaa "<<xx<<" jedhamu database irra hin jiru"<<endl;}
 
  menu();
}

