#include<iostream>
using namespace std;
class shape
{
	float ans,a,b;
	public:
		 void area(float r)
		{
			ans = 3.14 * r *r;
			cout<<"\n\nArea of Circle  : "<<ans;
		}
		void area(float a, float b)
		{
			ans = 0.5 * a * b;
			cout<<"\n\nArea of Triangle : "<<ans;
		}
		void area()
		{
			cout<<"\n\nEnter Lenght : ";
			cin>>a;
			cout<<"Enter Height : ";
			cin>>b;
			ans = a * b;
			cout<<"\n\nArea of Square/Rectangle : "<<ans;
		}
};
main()
{
	int n;
	float r,b;
	shape s;
	
	cout<<"\nSelect the shape : \n1. Circle \n2. Triangle \n3. Rectangle/Square";
	cin>>n;
	
	switch(n)
	{
		case 1:
			cout<<"\n\nEnter Radius : ";
			cin>>r;
			s.area(r);
			break;
			
		case 2:
			cout<<"\n\nEnter Base : ";
			cin>>b;
			cout<<"Enter Height : ";
			cin>>r;
			s.area(b,r);
			break;
			
		case 3:
			s.area();
			break;
			
		default:
			cout<<"\nINVALID CHOICE!!";
	}
}
