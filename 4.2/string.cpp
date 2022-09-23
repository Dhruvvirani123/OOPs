#include<iostream>
using namespace std;
class String
{
	char s[20],d[20];
	int a=10;
	public:
		void display(int a)
		{
			cout<<"\nA = "<<a;
		}
		void input()
		{
			cout<<"Enter your Name : \a";
			cin>>s;
			cout<<"Enter your Surname : ";
			cin>>d;
		}
		void display(int a, int b)
		{
			cout<<"String : "<<s<<d;
		}
};
main()
{
	String string;
	string.input();
	string.display(5,5);	
};