#include<iostream>
using namespace std;
class cricketer
{
	public:
		int a,b,c;
		char d[20];
		
	void name()
	{
		cout<<"Enter Betsman Name : ";
		cin>>d;
		cout<<"Enter Runs : ";
		cin>>a;
		cout<<"Enter Total Inning : ";
		cin>>b;
		cout<<"Enter Higeht Score of betsman : ";
		cin>>c;
	}
};
class batsman : public cricketer
{
	int average;
	
	public:
	void calcuaverage()
    {
        average = a/b;	
    } 
	void display()
	{
		cout<<"\n\n Batsman Name : "<<d;
        cout<<"\n Total Runs : "<<a;
        cout<<"\n Total Innings : "<<b;
        cout<<"\n Best Performance his Carrier : "<<c;
        cout<<"\n Carrier Avrage : "<<average;	
	} 
};
main()
{
	batsman b1;
	
	b1.name();
	b1.calcuaverage();
	b1.display();
}