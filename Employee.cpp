#include<iostream>
using namespace std;
class Employee
{
	private :
		int eid,sal,da,hra;
		string name;
	public:
		void set(int id,string n,int s,int da=12,int hra=30)
		{
			eid=id;
			name=n;
			sal=s;
			this->da=da;
			this->hra=hra;
		}
		void calculate()
		{
			
			hra=sal*30/100;
			da=sal*12/100;
		
		}
		void display()
		{
			calculate();
			cout<<"\n-------------------------------------------------------------------\n";
			cout<<"\nEmployee Id: "<<eid;
			cout<<"\nName: "<<name;
			cout<<"\nBasic Salary: "<<sal;
			cout<<"\nTotal DA:"<<da;
			cout<<"\nTotal HRA: "<<hra;
			cout<<"\nGross Salary: "<<da+hra+sal;
		}
};
main()
{
	Employee e;
	int id,sal;
	string name;
	cout<<"\nEnter Employee Id:";
	cin>>id;
	cout<<"\nEnter Employee Name:";
	cin>>name;
	cout<<"\nEnter Basic Salary: ";
	cin>>sal;
	e.set(id,name,sal);
	e.display();
}