#include<iostream>
using namespace std;
class Matrix_A
{
    public :
    int a[4], i;

    void input()
    {
        cout<<"Enter First Matrix\n";
        for(i=0; i<=3; i++)
        {
            cout<<"Enter A ["<<i<<"] : ";
            cin>>a[i];
        }
    }

    void display()
    {
        for(i=0; i<=3; i++)
        {
            cout<<"\nDisplay Array A ["<<i<<"] = "<<a[i]<<"";
        }
    }
};
class Matrix_B : public Matrix_A
{    
    public:
    int b[4];

    void input()
    {
        cout<<"\nEnter Second Matrix\n";
        for(i=0; i<=3; i++)
        {
            cout<<"Enter B ["<<i<<"] : ";
            cin>>b[i];
        }
    }

    void display()
    {
        cout<<"\n";
        for(i=0; i<=3; i++)
        {
            cout<<"\nDisplay Array B ["<<i<<"] = "<<b[i]<<"";
        }
    }
};
class Matrix_C : public Matrix_B
{
    int c[4];

    public :
    void addition()
    {   for(i=0; i<=3; i++)
    {
        c[i] = a[i]+ b[i];
    }

        printf("\n\nAddition of Two Array : ");
        for(i=0; i<=3; i++)
        {
            cout<<"\n C ["<<i+1<<"] = "<<c[i];
        }
    }
};
main()
{
    Matrix_C obj;

    obj.Matrix_A::input();
    obj.input();
    obj.Matrix_A::display();
    obj.display();
    obj.addition();
};