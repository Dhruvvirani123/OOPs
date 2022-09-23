#include <iostream>
using namespace std;
class Cube
{
    float a, b, mul, cube;

public:
    void multiplication(int a, int b)
    {
        mul = a*b;
        cout << "\n Multiplication : "<<mul;
    }
    void cubic(int a)
    {
        cube =mul*mul;
        cout <<"\n Cube : "<<cube;
    }
};

main()
{
    int a,b;

    Cube obj;

    cout <<"Enter First Value : ";
    cin >>a;
    cout <<"Enter Second Value : ";
    cin >>b;

    obj.multiplication(a, b);
    obj.cubic(a);
};