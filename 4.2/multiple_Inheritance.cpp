#include<iostream>
using namespace std;
class Man
{
public:
    int age;
    char name[20];

    void Name()
    {
        cout <<"Enter The Name Of Student : ";
        cin >>name;
        cout <<"Enter Age : ";
        cin >>age;
    }
};

class Student
{
public:
    float per;

    void Percentage()
    {
        cout <<"Enter Percentage of Member : ";
        cin >>per;
    }
};

class teacher : public Student,public Man
{
	public:
		int sal;
		void salary()
		{
			cout<<"Enter Salary : ";
			cin>>sal;
		}
		void display()
		{
			cout<<"\nName of Studunt : "<<name;
			cout<<"\nAge : "<<age;
			cout<<"\nPercentage : "<<per;
			cout<<"\nSalary : "<<sal;
		}
};

main()
{
	teacher obj;
	obj.Name();
	obj.Percentage();
	obj.salary();
	obj.display();
	
};