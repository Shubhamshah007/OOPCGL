#include <iostream>
using namespace std;
class publication
{
float price; char title[20]; public:
void input1()
{
cout<<"Input Details : \n"; cout<<"Enter Title :"; cin>>title;
cout<<"Enter Price :"; cin>>price;
}
void display1()
{
cout<<"----------------------------------------------\n"; cout<<"Publication Details : \n"; cout<<"The Title is "<<title<<"\n"; cout<<"The Price is "<<price<<"\n";
}
};
class book : public publication
{
int page_count;
public: void input2()
{
cout<<"Enter Page Count :"; cin>>page_count;
}
void display2()
{
cout<<"The Page Count is "<<page_count<<"\n";
}
};
class tape : public publication
{
float time1; public: void input3()
{
cout<<"Enter Play Time (in mins) :"; cin>>time1;
}
void display3()
{
cout<<"The Play Time is "<<time1<<" mins\n";
}
};
int main()
{
book b; tape t;
b.input1();
b.input2();
t.input3();
b.display1();
b.display2();
t.display3();
}