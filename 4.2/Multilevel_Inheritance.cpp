#include<iostream>
using namespace std;
class Student
{
	public:
	int a;
	void displayStudent()
	{
		cout<<"Enter Student Roll Nuber : ";
		cin>>a;
	}
};
class subject : public Student
{
	public:
		int b,c;
		void displaySubjeat()
		{
			cout<<"Enter a English Marks : ";
			cin>>b;
			cout<<"Enter a Maths Marks : ";
			cin>>c;
		}
};
class Marks : public subject
{
	public:
		int sum;
		void displayMarks()
		{
			sum = b+c;	
			cout<<"Total Marks is : "<<sum;
			
		}
			void display()
			{
				cout<<"\n\nRoll Number : "<<a;
//				cout<<"\nEnglish Marks : "<<b;
//				cout<<"\nMaths Marks : "<<c;
				cout<<"\nTotal Marks : "<<sum;
			}
		
};
main()
{
	Marks obj;
	obj.displayStudent();
	obj.displaySubjeat();
	obj.displayMarks();
	obj.display();
};