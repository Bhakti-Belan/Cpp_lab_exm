
/*Create a base class Account (Acc_Holder_Name, Acc_Holder_Contact_No). 
Derive a two classes as Saving_Account(S_Acc_No., Balance) and 
Current_Account( C_Acc_No., Balance) from Account. 
Write a C++ menu driven program to perform following functions : 
Accept the details for n account holders.
 Display the details of n account holders by adding interest 
amount where interest rate for Saving account is 5% of balance and 
interest rate for Current account is 1.5% of balance
*/
#include<iostream>
using namespace std;
class Account
{
	protected:
		long int cont;
		string name;
	public:
		Account(string n,int c)
		{
			name=n;
			cont=c;
		}
		Account()
		{
		}
	
};
class Savingaccount:public Account
{
	private:
		int san,bal;
	public:
		Savingaccount(string n,int c,int acc,int b=1000):Account(n,c)
		{
			san=acc;
			bal=b;
		}
		Savingaccount()
		{
		}
		int cal_int()
		{
			int i;
			return i=(bal*5/100)+bal;
		}
		void display()
		{
			cout<<"\n---------------------------------------------------\n";
			cout<<"\nAccount Holder Name: "<<name;
			cout<<"\nContact Number: "<<cont;
			cout<<"\nSaving Account Number: "<<san;
			cout<<"\nBalance: "<<cal_int();
			cout<<"\n---------------------------------------------------\n";
		}
		
};
class Currentaccount:public Account
{
	private:
		int can,bal;
	public:
		Currentaccount(string n,int c,int acc,int b=1000):Account(n,c)
		{
			can=acc;
			bal=b;
		}
		Currentaccount()
		{
		}
		int cal_int()
		{
			int i;
			return i=(bal*1.5/100)+bal;
		}
		void display()
		{
			
			cout<<"\nAccount Holder Name: "<<name;
			cout<<"\nContact Number: "<<cont;
			cout<<"\nCurrent Account Number: "<<can;
			cout<<"\nBalance: "<<cal_int();
			cout<<"\n---------------------------------------------------\n";
		}
		
};
main()
{
	Savingaccount s[10];
	Currentaccount c[10];
	int a,ch,n,b,i=0,j=0;
	long int co;
	string name,type;
	do
	{
		cout<<"\n1)Add N Accounts\n2)Display\n3)Exit\n";
		cout<<"\nEnter Your Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Number Of Accounts To Add: ";
				cin>>n;
				for(int k=0;k<n;k++)
				{
					cout<<"\nEnter Type Of Account(Saving/Current): ";
					cin>>type;
					if(type=="Saving")
					{
						cout<<"\nEnter Account Holder Name: ";
						cin>>name;
						cout<<"\nEnter Contact Number: ";
						cin>>co;
						cout<<"\nEnter Account Number: ";
						cin>>a;
						cout<<"\nEnter Balance: ";
						cin>>b;
						s[i++]=Savingaccount(name,co,a,b);
						
					}
					else if(type=="Current")
					{
						cout<<"\nEnter Account Holder Name: ";
						cin>>name;
						cout<<"\nEnter Contact Number: ";
						cin>>co;
						cout<<"\nEnter Account Number: ";
						cin>>a;
						cout<<"\nEnter Balance: ";
						cin>>b;
						c[j++]=Currentaccount(name,co,a,b);
						
					}
					else
					cout<<"\nInvalid Type!!!";
					
				}
				break;
				case 2:
					cout<<"\n---------------------Saving Account----------------------";
					for(int k=0;k<i;k++)
				{
					s[k].display();
		        }
		        cout<<"\n---------------------Current Account----------------------";
					for(int k=0;k<j;k++)
				{
					c[k].display();
		        }
	
	           case 3: exit(0);
	       }
	
}while(ch!=3);
}