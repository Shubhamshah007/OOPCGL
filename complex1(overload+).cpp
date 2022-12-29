#include<iostream>
using namespace std;
class complex 
{
    public:

    int real,img;
    complex()
    {
        real=0;
        img=0;
    }
    complex operator +(complex );
    void input();
    void display();
};

complex complex::operator +(complex obj)
{
    complex sum;
    sum.real=real+obj.real;
    sum.img =img+obj.img;
    return sum;
}

void complex::input()
{

    cout<<"enter real part of complex number"<<endl;
    cin>>real;
    cout<<"enter imaginary part of complex number"<<endl;
    cin>>img;
}

void complex::display()
{

    cout<<" real part of complex number"<<endl;
    cout<<real;
    cout<<"\n imaginary part of complex number"<<endl;
    cout<<img;
}
int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.display();
    return 0;

}