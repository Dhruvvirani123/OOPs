#include<iostream>
using namespace std;
class A
{
	float a,b,c,d,ans;
	public:
		void input()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			cout<<"Enter C : ";
			cin>>c;
			cout<<"Enter D : ";
			cin>>d;
		}
		void display()
		{
			ans = a+b+c+d;
			cout<<"\nAddition : "<<ans;
			
			ans = a-b-c-d;
			cout<<"\nSubtracation : "<<ans;
			
			ans = a*b*c*d;
			cout<<"\nMultiplication : "<<ans;
			
			ans = a/b/c/d;
			cout<<"\nDivision : "<<ans;
			
		}
};
main()
{
	A obj;
	obj.input();
	obj.display();
}