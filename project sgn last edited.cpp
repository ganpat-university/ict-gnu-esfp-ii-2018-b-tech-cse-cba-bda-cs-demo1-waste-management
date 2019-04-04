#include"iostream"
#include"fstream"
using namespace std;
class ons
{
    public:
    int house,street,west,date[3],a,state,member,d;

    char area[20],city[20],district[20],suggestion[50];
    float quantity;
    void show()
    {
    cout<<"             ######################################################################################"<<endl;
    cout<<"             #                            WASTE MANAGEMENT SYSTEM                                 #"<<endl;
    cout<<"             ######################################################################################"<<endl<<endl<<endl<<endl<<endl;
    }
};
class sgn:public ons
{
public:
void seta2()
{
    ifstream sgn;
    sgn.open("sgn2.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;
}
void seta1()
{
    ifstream sgn;
    sgn.open("sgn1.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;

}
void seta3()
{
    ifstream sgn;
    sgn.open("sgn3.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;
}
void seta4()
{
    ifstream sgn;
    sgn.open("sgn4.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;
}
void seta5()
{
    ifstream sgn;
    sgn.open("sgn5.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;
}
void seta6()
{
    ifstream sgn;
    sgn.open("sgn6.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;
}
void seta7()
{
    ifstream sgn;
    sgn.open("sgn7.txt",ios::in);
    sgn>>state;
    sgn>>district;
    sgn>>city;
    sgn>>area;
    sgn>>street;
    sgn>>house;
    sgn>>member;
    sgn>>west;
    sgn>>quantity;
    sgn>>date[0];
    sgn>>date[1];
    sgn>>date[2];
    sgn>>a;
    sgn>>suggestion;
}
void setm()
{

    do
    {
        d=0;
    cout<<"enter state: "<<"\n"<<"press 1 for gujarat "<<"\n" <<"press 2 for maharastra"<< "\n"<<"press 3 for delhi";
    cin>>state;
    if(state>3 || state<1)
    {
        cout<<endl<<"enter valid input";
        d=2;
    }
    }while(d==2);


    cout<<"enter district:";
    cin>>district;
    cout<<"enter city";
    cin>>city;
    cout<<"enter area:";
    cin>>area;
    cout<<"enter street number :";
    cin>>street;
    cout<<"enter house number :";
    cin>>house;
    d=2;
    while(d)
    {
    //d=1;
    //con=false;
    cout<<endl<<"enter 1 for dry" <<endl<<" 2 for wet";
    cin>>west;
    if(west>2 || west<1)
    {
        cout<<endl<<"enter valid input";
    }
    else{d=0;}

    }
    cout<<"enter date (dd):";
    cin>>date[1];
    cout<<"enter month (mm):";
    cin>>date[2];
    cout<<"enter year (yyyy):";
    cin>>date[3];
    cout<<"if you have any suggestions enter 1 if not press any thing :";
    cin>>a;
    if(a==1)
    {
        cout<<"enter your suggestions:";
        cin>>suggestion;
    }
}
/*void setm()
{
    cout<<"enter state: "<<"\n"<<" press 1 for gujarat "<<"\n" <<"press 2 for maharastra"<< "\n"<<" press 3 for delhi";
    cin>>state;
    cout<<"enter district:";
    cin>>district;
    cout<<"enter city";
    cin>>city;
    cout<<"enter area:";
    cin>>area;
    cout<<"enter street number :";
    cin>>street;
    cout<<"enter house number :";
    cin>>house;
    cout<<"enter 1 for dry /n 2 for wet";
    cin>>west;
    cout<<"enter date (dd):";
    cin>>date[1];
    cout<<"enter month (mm):";
    cin>>date[2];
    cout<<"enter year (yyyy):";
    cin>>date[3];
    cout<<"if you have any suggestions enter 1 if not press any thing :";
    cin>>a;
    if(a==1)
    {
        cout<<"enter your suggestions:";
        cin>>suggestion;
    }
}*/

/*void get()
{

    if(state==1)
        cout<<"Gujarat"<<"\t";
    if(state==2)
        cout<<"Maharastra"<<"\t";
    if(state==3)
        cout<<"Delhi"<<"\t";
    cout<<district<<"\t";
    cout<<city<<"\t";
    cout<<area<<"\t";
    cout<<street<<"\t";
    cout<<house<<"\t";
    cout<<member<<"\t";
    cout<<west<<"\t";
    cout<<quantity<<"kgs"<<"\t";
    cout<<date[1]<<"/"<<date[2]<<"/"<<date[3];
    cout<<suggestion<<endl;
}*/
void get2()
{
    cout<<"state:"<<"\t"<<"\t"<<"\t";
    if(state==1)
        cout<<"Gujarat"<<"\n";
    if(state==2)
        cout<<"Maharastra"<<"\n";
    if(state==3)
        cout<<"Delhi"<<"\n";
    cout<<"district:-"<<"\t"<<"\t"<<district<<"\n";
    cout<<"city:-"<<"\t"<<"\t"<<"\t"<<city<<"\n";
    cout<<"area:-"<<"\t"<<"\t"<<"\t"<<area<<"\n";
    cout<<"street number:-"<<"\t"<<"\t"<<street<<"\n";
    cout<<"house number:-"<<"\t"<<"\t"<<house<<"\n";
    cout<<"number of member:-"<<"\t"<<member<<"\n";
    if(west==1)
    {
    cout<<"west type:-"<<"\t"<<"\t"<<"dry"<<"\n";
    }
    if(west==2)
    {
    cout<<"west type:-"<<"\t"<<"\t"<<"wet"<<"\n";
    }
    cout<<"quantity:-"<<"\t"<<"\t"<<quantity<<"kgs"<<"\n";
    cout<<"date:-"<<"\t"<<"\t"<<"\t"<<date[1]<<"/"<<date[2]<<"/"<<date[3]<<"\n";
    if(a==1)
    cout<<"suggestion"<<"\t"<<"\t"<<suggestion<<endl;
}


};
int main()
{
    sgn ob[10];
    ons obj;
    obj.show();
    int i=0,j,k,c,d,g,n,x,y,f,l;
    char b,m;
    for(i=0;b!='q';i++)
    {
        do
        {
            l=1;
        cout<<endl<<"enter 1 for automatic data entry"<< "\n" <<"press 2 for manual data entry"<<endl;
        cin>>g;
            if(g>2 || g<1)
            {
                cout<<"enter valid input"<<endl;
                l=2;
            }
        }while(l==2);
        do
        {
            x=0;
        if(g==1)
        {
           // cout<<endl<<"it will tack all data from file that you chose like "<<endl<<"house,street,west,date,state,member,area,city,district,suggestion,quantity;";
            cout<<endl<<endl<<"enter your choice for file (press between 1 to 7)";
            cin>>n;
            if(n==1)
            {
                ob[i].seta1();
                ob[i].get2();
            }
               else if(n==2)
                {
                    ob[i].seta2();
                    ob[i].get2();
                }
                   else if(n==3)
                    {
                        ob[i].seta3();
                        ob[i].get2();
                    }
                       else if(n==4)
                        {
                            ob[i].seta4();
                            ob[i].get2();
                        }
                           else if(n==5)
                            {
                                ob[i].seta5();
                                ob[i].get2();
                            }
                               else if(n==6)
                                {
                                    ob[i].seta6();
                                    ob[i].get2();
                                }
                                   else if(n==7)
                                    {
                                        ob[i].seta7();
                                        ob[i].get2();
                                    }
                                    else
                                    {
                                        cout<<"enter valid input set func."<<"\n";
                                        x=1;
                                    }

        }
    }while(x==1);
        if(g==2)
        {
    ob[i].setm();
        }

    cout<<endl<<"enter 'q' for quit data enter if you want to continue press anything"<<endl;
    cin>>b;
    }
    do
        {
            m='x';
do
{
    y=0;
cout<<"press 1 for search house in street 3 in delhi state"<<"\n";
cout<<"press 2 for search  houses whose waste type is wet and quantity is more than 2kgs "<<"\n";
cout<<"press 3 for search house state gujarat and west type dry"<<"\n";
cout<<"press 4 for search house in Delhi which fall in street no 5 and no of members is greater than 10."<<"\n";
cout<<"press 5 for search house in Maharashtra which have dry waste type and no of members is greater than 5"<<"\n";
cout<<"press 6 for search house in Maharashtra whose no of family members is less than 3 and suggestions are given"<<"\n";
cout<<"press 7 for search house in Maharashtra and Delhi which have wet waste type and quantity is greater than 6 kg"<<"\n";
cin>>k;
if(k==1)
{
    for(i=0;i<=10;i++)
    {
        if(ob[i].state==3 && ob[i].street==3)
        {
            ob[i].get2();
        }
    }
}
if(k==2)
{
    for(i=0;i<=10;i++)
    {
        if(ob[i].west==2 && ob[i].quantity>2)
        {
            ob[i].get2();
        }
    }
}
if(k==3)
{
    for(i=0;i<=2;i++)
    {
        if(ob[i].west=1 && ob[i].state==1)
        {
            ob[i].get2();
        }
    }
}
 if(k==4)
{
    for(i=0;i<=10;i++)
    {
        if(ob[i].state==3 && ob[i].member>10 && ob[i].street==5)
        {
            ob[i].get2();
        }
    }
}
if(k==5)
{
    for(i=0;i<=10;i++)
    {
        if(ob[i].state==2 && ob[i].member>5 && ob[i].west==1)
        {
            ob[i].get2();
        }
    }
}
if(k==6)
{
    for(i=0;i<=10;i++)
    {
        if(ob[i].state==2 && ob[i].member<3 && ob[i].a==1)
        {
            ob[i].get2();
        }
    }
}
if(k==7)
{
    for(i=0;i<=10;i++)
    {
        if(ob[i].state==2 || ob[i].state==3 )
        {
            if(ob[i].quantity>6 && ob[i].west==2)
            {
            ob[i].get2();
            }
        }
    }
}
if(k>7)
{
    cout<<endl<<"enter valid input"<<endl;
    y=1;
}

}while(y==1);
cout<<endl<<"enter 'c' for continue searching if you want to quite press anything";
cin>>m;
k=1;
}while(m=='c');
}
