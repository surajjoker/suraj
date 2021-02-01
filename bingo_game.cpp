#include<iostream>
#include<conio.h>
using namespace std;
int n1,n2;
int n3;
void comput()
{
    	system("cls");
	
	while(true){
			
	cout<<"\t \t######____T H E   I N D I A N  G A M E____###### \n \n"<<endl;
	cout<<endl<<endl<<endl;
	cout<<"\t\t _______TRY YOUR LUCK______"<<endl;
	cout<<endl<<endl;
	cout<<"\t****Enter your FIRST best number(IN BETWEEN 0-5)****"<<endl;
	cin>>n1;
	cout<<"\t****Enter your SECOND best number(IN BETWEEN 0-5)****"<<endl;
	cin>>n2;
	n3=n1+n2;
	cout<<endl<<endl<<endl<<endl;
	switch(n3)
	{
		case 0:
			cout<<"\t you are my friand"<<endl;
			break;
		case 1:
			cout<<"\t you are dog"<<endl;
			break;
		case 2:
			cout<<"\t you are pubg player"<<endl;
			break;
		case 3:
			cout<<"\t you are free fire player"<<endl;
			break;
		case 4:
			cout<<"\t I LOVE YOUE"<<endl;
			break;
		case 5:
			cout<<"\t I LOVE YOU TO TO TO"<<endl;
			break;
		case 6:
			cout<<"\t SO SORRY!!!!"<<endl;
			break;
		case 7:
			cout<<"\t YOU ARE HERO"<<endl;
			break;
		case 8:
			cout<<"\t ****YOU SAME LIKE A GOLDBARRRR****"<<endl;
			break;
		case 9:
			cout<<"\t %%%%ERROR%%%%%"<<endl;
			break;
		case 10:
			cout<<"\t 999+"<<endl;
			break;
		default:
			cout<<"\t YOU ENTERED WRONG NUMBER!!!!"<<endl;
			break;
	}
	cout<<"\n\n\n____________________________________________________________________\n"<<endl;
}
}
  main()
{
 comput();
}
