#include <iostream>
using namespace std;
class C
{
    int a,b,ans=0;
	public:
    void input()
    {
        cout<<"Enter A : ";
        cin >>a;
        cout<<"Enter B : ";
        cin>>b;
    }

    void Cal(int f)
    {
        ans=a+b;
        cout<<"\n Addition : "<<ans;
    }
    void Cal(double d)
    {
        ans=a-b;
        cout<<"\n substraction : "<<ans;
    }

    void Cal(char r)
    {
        ans=a*b;
        cout<<"\n Multiplication : "<<ans;
    }

    void Cal(int h, char z)
    {
        ans=a/b;
        cout<<"\n Division : "<<ans;
    }
};

main()
{
    C obj;

    obj.input();
    obj.Cal(9);
    obj.Cal(9.99);
    obj.Cal('d');
    obj.Cal(8,'e');
};