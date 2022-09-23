#include<iostream>
using namespace std;
class calculator
{
	float a,b,c,d,ans;
	public:
		
	calculator()
	{
		cout<<"Enter Value A : ";
		cin>>a;
		
		cout<<"Enter Value B : ";
		cin>>b;
		
		cout<<"Enter Value C : ";
		cin>>c;
		
		cout<<"Enter Value D : ";
		cin>>d;
		
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
	calculator c;
}