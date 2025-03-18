#include<iostream>
using namespace std;
	
class Person
{
	public:
		     int id,age,n_id;
		     string name;
	public:
		void setdata()
		{
				cout <<"\n--------HOSPITAL MANAGEMENT SYSTEM----------------";
			cout<<"\n Enter Person id=";
			cin>>id;
			cout<<"\n Enter Person Age";
			cin>>age;
			cout<<"\n Enter Person Name:";
			cin>>name;
			cout<<"\n Enter New id=";
			cin>>n_id;
		}
		void displaydata()
		{
			
			cout<<"\n ID"<<id<<"\n Age"<<age<<"\n Name="<<name<<"\n New_id"<<n_id;
		}
		void addPatient()
		{
			cout<<"\n----------------PATIENT ADMIT--------------------------";
			if(id!=n_id)
			    cout<<" patient admitted Successfully";
			else
			    cout<<"this is our old patient";
			
		}
};
class Patient : public Person
{
	public:
		  string disease;
		  int contactno;
	public:
		void setdata()
		{
			cout<<"\n Enter An Disease of patient= ";
			cin>>disease;
			cout<<"\n Enter Contact Number=";
			cin>>contactno;
		}
		void displaydata()
		{
			cout<<"\n Disease"<<disease<<"\n contact Number"<<contactno;
			
		}
		
};

class Doctor : public Person
{
	public:
		string specialization;
		string availability;
		
	public:
		void setdata()
		{
			cout<<"\n Enetr Specialization Of Doctor=";
			cin>>specialization;
			cout<<"\n Enter Availability";
			cin>>availability;
		}
		void displaydata()
		{
			cout<<"\n Specialization"<<specialization;
			cout<<"\n Availability"<<availability;
		}
		void addDoctors()
		{
			if(specialization!= availability)
			    cout<<"\n Doctors Added Successfully";
			else
			   cout<<"\n There is no need to add new doctor ";
		}
};

class Appointment
{
	public:
		int app_id, date, time;
		string patient_N;
		string doctor_N;
	public:
		
		void setdata()
		{
			cout<<"\n Enter Appointment Id= ";
			cin>>app_id;
			cout<<"\n Enter name of admited patient=";
			cin>>patient_N;
			cout<<"\n Enter Doctor Name=";
			cin>>doctor_N;
			cout<<"\n Enter patient Admitted Date=";
			cin>>date;
			cout<<"\n Enter Patient Admitted Time=";
			cin>>time;
		}
		void displaydata()
		{
			cout<<"\n--------------APPOINTMENT DETAILS---------------------------";
			cout<<"\n Appointment id"<<app_id<<"\n  Patient name"<<patient_N<<"\n Doctor Name="<<doctor_N<<"\n Enter Date="<<date<<"\n Enter Time="<<time;
		}
		
	
};
class Hospital
{
	//cout<<"\n ----------APPOINTMENT MANAGEMENT---------------------";
		public:
		int app_id, date, time;
		string patient_N;
		string doctor_N;
	void scheduleAppointment()
	{
		cout<<"\n Enter Appointment Id= ";
			cin>>app_id;
			cout<<"\n Enter name of admited patient=";
			cin>>patient_N;
			cout<<"\n Enter Doctor Name=";
			cin>>doctor_N;
			cout<<"\n Enter patient Admitted Date=";
			cin>>date;
			cout<<"\n Enter Patient Admitted Time=";
			cin>>time;
		}
		void displaydata()
		{
			cout<<"\n--------------APPOINTMENT DETAILS---------------------------";
			cout<<"\n Appointment id"<<app_id<<"\n  Patient name"<<patient_N<<"\n Doctor Name="<<doctor_N<<"\n Enter Date="<<date<<"\n Enter Time="<<time;
		}
	
	
};

main()
{
	Person P1;
	P1.setdata();
	P1.displaydata();
	P1.addPatient();
	
	cout<<"\n-------------------------------------------";
	
	Patient P2;
	P2.setdata();
	P2.displaydata();
	
	cout<<"\n-------------------------------------------";
	Doctor D1;
	D1.setdata();
	D1.displaydata();
	D1.addDoctors();
	
	cout<<"\n-------------------------------------------";
	Appointment A1;
	A1.setdata();
	A1.displaydata();
	
	cout<<"\n-------------------------------------------";
	Hospital H1;
	H1.scheduleAppointment();
	H1.displaydata();
	
	
}

