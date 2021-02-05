#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class account
{
    char name[20];
    int e_no, balance;
    public:
    void accept();
    void display();
};
void account::accept()
{
    cout<<"enter the name= \n e_no= \n balance= "<<endl;
    
    cin>>name>>e_no>>balance;
    cout<<"______________________________"<<endl;
}
void account::display()
{
    cout<<"the entered name is="<<name<<endl<<"the entered e_no is="<<e_no
    <<endl<<"the entered balance is="<<balance<<endl;
    cout<<"__________________________________"<<endl;
}
 main()
{
    account *A;
    int n,i;
    cout<<"enter the no.of order="<<endl;
    cin>>n;
    A=new account[n];
    for(i=0;i<n;i++)
    {
        A[i].accept();
    }
      for(i=0;i<n;i++)
    {
        A[i].display();
    }
}
